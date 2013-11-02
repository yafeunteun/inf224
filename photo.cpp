#include "photo.h"
#include <iostream>

using std::cout;
using std::endl;

Photo::Photo(string nom, unsigned long long int date, string pathname, string localisation)
    : Multimedia(nom, date, pathname)
{
    m_localisation = localisation;
}

string Photo::getLocalisation(void) const
{
    return m_localisation;
}

void Photo::setLocalisation(string localisation)
{
    m_localisation = localisation;
}

void Photo::affiche(void) const
{
    cout<<"Nom de la photo : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl;
    cout<<"Localisation de la prise : "<<m_localisation<<endl<<endl;
}
