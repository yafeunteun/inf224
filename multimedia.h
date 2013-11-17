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
    Multimedia();
    Multimedia(const string nom, const unsigned long long int date, const string pathname);
    virtual ~Multimedia();

    // Getteurs
    string getNom() const;
    unsigned long long int getDate() const;
    string getPathname() const;

    // Setteurs
    void setNom(const string nom);
    void setDate(const unsigned long long int date);
    void setPathname(const string pathname);

    // Affiche les données propres à l'objet sur la sortie standard.
    virtual void affiche(void) const;
    virtual int play(void) = 0;
protected:
    string m_nom ;
    unsigned long long int m_date; // en secondes
    string m_pathname;


};

#endif // MULTIMEDIA_H
