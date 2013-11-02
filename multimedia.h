#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

/*!
 * \file Multimedia.h
 * \brief Gestionnaire de fichiers multimédias de base
 * \author yann feunteun
 */

#include <string>

using  std::string;


/*! \class Multimedia
   * \brief Cette classe de base contiendra ce qui est commun à tous les objets multimédia.
   *
   *  On s'en servira ensuite pour définir des sous-classes spécifiques à chaque type de donnée (par exemple une classe photo, vidéo, film, morceau de musique, etc.)
   */
class Multimedia
{
public:
    /*!
    *  \brief Constructeur par défaut
    *
    *  Construit un objet Multimedia vide.
    */
    Multimedia();
    /*!
    *  \brief Constructeur
    *
    *  Construit un objet Multimedia suivant les paramètres donnés.
    *
    *  \param nom : Le nom de l'objet multimédia
    *  \param date : Date d'acquisition comptée en secondes depuis le 1er janvier 1970
    *  \param pathname : Le nom du fichier associé à l'objet multimédia. Il s'agit du chemin complet (pathname) permettant d'accéder à ce fichier (une photo jpeg, une vidéo mpeg, etc.) dans le système de fichiers Unix.
    */
    Multimedia(string nom, unsigned long long int date, string pathname);

    /*!
    *  \brief Destructeur
    *
    */
    virtual ~Multimedia();

    // Getteurs
    string getNom() const;
    unsigned long long int getDate() const;
    string getPathname() const;

    // Setteurs
    void setNom(string nom);
    void setDate(unsigned long long int date);
    void setPathname(string pathname);

    // Affiche les données propres à l'objet sur la sortie standard.
    virtual void affiche(void) const;

protected:
    string m_nom ;
    unsigned long long int m_date; // en secondes
    string m_pathname;
};

#endif // MULTIMEDIA_H
