#include "multimedia.h"
#include <iostream>

using std::cout;
using std::endl;

/*!
*  \brief Constructeur par défaut
*
*  Construit un objet Multimedia vide.
*/
Multimedia::Multimedia()
{
    cout<<"Multimedia::Multimedia() has created : "<<this<<endl;

    m_nom = "";
    m_date = 0;
    m_pathname = "";
}

/*!
*  \brief Constructeur
*
*  Construit un objet Multimedia suivant les paramètres donnés.
*
*  \param nom : Le nom de l'objet multimédia
*  \param date : Date d'acquisition comptée en secondes depuis le 1er janvier 1970
*  \param pathname : Le nom du fichier associé à l'objet multimédia. Il s'agit du chemin complet (pathname) permettant d'accéder à ce fichier (une photo jpeg, une vidéo mpeg, etc.) dans le système de fichiers Unix.
*/
Multimedia::Multimedia(const string nom, const unsigned long long date, const string pathname)
{
    cout<<"Multimedia::Multimedia(string, unsigned long long int, string) has created : "<<this<<endl;

    m_nom = nom;
    m_date = date;
    m_pathname = pathname;
}

/*!
*  \brief Destructeur
*/
Multimedia::~Multimedia()
{
    cout<<"Multimedia::~Multimedia() has destroyed : "<<this<<endl;
}

/*!
*  \return le nom du fichier.
*/
string Multimedia::getNom() const
{
    return m_nom;
}

/*!
*  \return la date d'acquisition du fichier.
*/
unsigned long long int Multimedia::getDate() const
{
    return m_date;
}

/*!
*  \return le chemin d'accès au fichier sur le disque dur.
*/
string Multimedia::getPathname() const
{
    return m_pathname;
}

/*!
*  \brief Modifie le nom du fichier.
*
*   \param nom : le nom du fichier.
*/
void Multimedia::setNom(const string nom)
{
    m_nom = nom;
}

/*!
*  \brief Modifie la date d'acquisition du fichier.
*
*   La date doit etre donnée en secondes depuis le premier janvier 1970 (format UNIX).
*
*   \param nom : la date d'acquisition du fichier du fichier.
*/
void Multimedia::setDate(const unsigned long long date)
{
    m_date = date;
}

/*!
*  \brief Modifie le chemin d'accès au fichier sur le disque dur.
*
*   \param nom : le chemin d'accès au fichier sur le disque dur.
*/
void Multimedia::setPathname(const string pathname)
{
    m_pathname = pathname;
}


/*!
*  \brief Affiche les informations sur le fichier.
*/
void Multimedia::affiche(void) const
{
    cout<<"Nom du fichier multimédia : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl<<endl;
}

