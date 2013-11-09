#include "film.h"
#include <iostream>


using std::cout;
using std::endl;


Film::Film(string nom, unsigned long long int date, string pathname, uint32_t duree)
    : Video(nom, date, pathname, duree)
{
    m_dureesChapitres = 0;
}

Film::Film(string nom, unsigned long long date, string pathname, uint32_t duree, uint16_t* dureesChapitres, uint8_t nbChapitres)
: Video(nom, date, pathname, duree)
{
    m_dureesChapitres = 0;
    this->setDureesChapitres(dureesChapitres, nbChapitres);
}


Film::Film(const Film& f) : Video(f.getNom(), f.getDate(), f.getPathname(), f.getDuree())
{
    this->m_nbChapitres = f.m_nbChapitres;
    this->m_dureesChapitres = new uint16_t[m_nbChapitres];

    for(uint8_t i = 0; i<m_nbChapitres; ++i )
        this->m_dureesChapitres[i] = f.m_dureesChapitres[i];
}

Film& Film::operator=(const Film& f)
{
    this->m_nom = f.getNom();
    this->m_date = f.getDate();
    this->m_pathname = f.getPathname();
    this->m_duree = f.getDuree();

    delete m_dureesChapitres;

    this->m_nbChapitres = f.m_nbChapitres;
    this->m_dureesChapitres = new uint16_t[m_nbChapitres];

    for(uint8_t i = 0; i<m_nbChapitres; ++i )
        this->m_dureesChapitres[i] = f.m_dureesChapitres[i];

    return *this;
}

Film::~Film()
{
    cout<<"Film::~Film() has destroyed : "<<this<<endl;
    delete m_dureesChapitres;
}


void Film::setDureesChapitres(uint16_t* dureesChapitres, uint8_t nbChapitres)
{
    delete m_dureesChapitres;

    m_nbChapitres = nbChapitres;
    m_dureesChapitres = new uint16_t[nbChapitres];

    for(uint8_t i = 0; i<nbChapitres; ++i )
        m_dureesChapitres[i] = dureesChapitres[i];

}

uint16_t* Film::getDureesChapitres(uint8_t* nbChapitres)
{
    *nbChapitres = m_nbChapitres;
    uint16_t* dureesChapitres = new uint16_t[m_nbChapitres];

    for(uint8_t i = 0; i<m_nbChapitres; ++i )
        dureesChapitres[i] = m_dureesChapitres[i];

    return dureesChapitres;

}

void Film::affiche()
{
    cout<<"Nom du Film : "<<m_nom<<endl;
    cout<<"Date d' acquisition du fichier (en secondes écoulées depuis le 1er janvier 1970) : "<<m_date<<endl;
    cout<<"Chemin d'accès (pathname) : "<<m_pathname<<endl;
    cout<<"Durée du film : "<<m_duree<<endl<<endl;

    for(uint8_t i = 0; i<m_nbChapitres; ++i)
    {
       cout<<"\t chapitre["<<i+1<<"] : "<<m_dureesChapitres[i]<<endl;
    }

    cout<<endl;

}
