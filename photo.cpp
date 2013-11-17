#include "photo.h"
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;


/*!
*  \brief Constructeur
*
*  Construit un objet Photo suivant les paramètres donnés.
*
*  \param nom : Le nom da la photo.
*  \param date : Date d'acquisition comptée en secondes depuis le 1er janvier 1970.
*  \param pathname : Le nom du fichier associé à la photo. Il s'agit du chemin complet (pathname) permettant d'accéder à ce fichier dans le système de fichiers Unix.
*  \param localisation : la localisation de la prise de la photo.
*/
Photo::Photo(const string& nom, const unsigned long long int date, const string& pathname, const string& localisation)
    : Multimedia(nom, date, pathname)
{
    m_localisation = localisation;
}


/*!
*  \return la localisation de la photo.
*/
const string Photo::getLocalisation(void) const
{
    return m_localisation;
}

/*!
*  \brief Modifie la localisation de la photo.
*
*   \param nom : la localisation de la photo.
*/
void Photo::setLocalisation(const string &localisation)
{
    m_localisation = localisation;
}

/*!
*  \brief Affiche les informations sur la photo.
*/
void Photo::affiche(void) const
{
    cout<<"Nom de la photo : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl;
    cout<<"Localisation de la prise : "<<m_localisation<<endl<<endl;
}


/*!
*  \brief Affiche la photo avec eog.
*  \return -1 en cas d'erreur.
*/
int Photo::play(void)
{
    std::string command;
    command = "eog " + this->m_pathname + "&";
    return system(command.c_str());
}
