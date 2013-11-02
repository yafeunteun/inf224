#include "multimedia.h"
#include <iostream>

using std::cout;
using std::endl;

Multimedia::Multimedia()
{
    cout<<"Multimedia::Multimedia() has created : "<<this<<endl;

    m_nom = "";
    m_date = 0;
    m_pathname = "";
}

Multimedia::Multimedia(string nom, unsigned long long int date, string pathname)
{
    cout<<"Multimedia::Multimedia(string, unsigned long long int, string) has created : "<<this<<endl;

    m_nom = nom;
    m_date = date;
    m_pathname = pathname;
}

Multimedia::~Multimedia()
{
    cout<<"Multimedia::~Multimedia() has destroyed : "<<this<<endl;
}

string Multimedia::getNom() const
{
    return m_nom;
}

unsigned long long int Multimedia::getDate() const
{
    return m_date;
}

string Multimedia::getPathname() const
{
    return m_pathname;
}

void Multimedia::setNom(string nom)
{
    m_nom = nom;
}

void Multimedia::setDate(unsigned long long int date)
{
    m_date = date;
}

void Multimedia::setPathname(string pathname)
{
    m_pathname = pathname;
}

void Multimedia::affiche(void) const
{
    cout<<"Nom du fichier multimédia : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl<<endl;
}

