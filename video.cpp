#include "video.h"
#include <iostream>
#include <stdlib.h>


using std::cout;
using std::endl;

/*!
*  \brief Constructeur
*
*  Construit un objet Video suivant les paramètres donnés.
*
*  \param nom : Le nom da la vidéo.
*  \param date : Date d'acquisition comptée en secondes depuis le 1er janvier 1970.
*  \param pathname : Le nom du fichier associé à la vidéo. Il s'agit du chemin complet (pathname) permettant d'accéder à ce fichier dans le système de fichiers Unix.
*  \param duree : la durée de la vidéo en secondes.
*/
Video::Video(const string& nom, const unsigned long long int date, const string& pathname, const uint32_t duree) : Multimedia(nom, date, pathname)
{
    m_duree = duree;
}

/*!
*  \brief Destructeur
*/
Video::~Video()
{
    cout<<"Video::~Video() has destroyed : "<<this<<endl;
}

/*!
*  \return la durée de la vidéo.
*/
uint32_t Video::getDuree(void) const
{
    return m_duree;
}

/*!
*  \brief Modifie la durée de la vidéo.
*
*   \param nom : la durée de la vidéo.
*/
void Video::setDuree(const uint32_t duree)
{
    m_duree = duree;
}

/*!
*  \brief Affiche les informations sur la vidéo.
*/
void Video::affiche(void) const
{
    cout<<"Nom du fichier Vidéo : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl;
    cout<<"Durée de la vidéo : "<<m_duree<<endl<<endl;
}

/*!
*  \brief Lance la video avec vlc.
*  \return -1 en cas d'erreur.
*/
int Video::play(void)
{
    std::string command;
    command = "vlc " + this->m_pathname + "&";
    return system(command.c_str());
}
