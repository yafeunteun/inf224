#include "video.h"
#include <iostream>


using std::cout;
using std::endl;


Video::Video(string nom, unsigned long long int date, string pathname, uint32_t duree) : Multimedia(nom, date, pathname)
{
    m_duree = duree;
}

Video::~Video()
{
    cout<<"Video::~Video() has destroyed : "<<this<<endl;
}


uint32_t Video::getDuree(void) const
{
    return m_duree;
}

void Video::setDuree(uint32_t duree)
{
    m_duree = duree;
}

void Video::affiche(void) const
{
    cout<<"Nom du fichier Vidéo : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl;
    cout<<"Durée de la vidéo : "<<m_duree<<endl<<endl;
}
