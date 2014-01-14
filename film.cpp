#include "film.h"
#include <iostream>
#include <stdlib.h>


using std::cout;
using std::endl;



/*!
*  \brief Constructeur
*
*  Construit un objet Film suivant les paramètres donnés.
*
*  \param nom : Le nom du film.
*  \param date : Date d'acquisition comptée en secondes depuis le 1er janvier 1970.
*  \param pathname : Le nom du fichier associé au film. Il s'agit du chemin complet (pathname) permettant d'accéder à ce fichier dans le système de fichiers Unix.
*  \param duree : la durée du film en secondes.
*  \param dureesChapitres : un tableau d'entiers contenant la durée de chaque chapitre en secondes.
*  \param nbChapitres : le nombre de chapitres i.e la taille du tableau dureesChapitres.
*/
Film::Film(const string& nom, const unsigned long long date, const string& pathname, const uint32_t duree, uint16_t* dureesChapitres, const uint8_t nbChapitres)
: Video(nom, date, pathname, duree)
{
    m_dureesChapitres = 0;
    this->setDureesChapitres(dureesChapitres, nbChapitres);
}

/*!
*  \brief Constructeur de copie
*
*  Construit un objet Film par copie.
*
*  \param f : le film à copier.
*/
Film::Film(const Film& f) : Video(f.getNom(), f.getDate(), f.getPathname(), f.getDuree())
{
    this->m_nbChapitres = f.m_nbChapitres;
    this->m_dureesChapitres = new uint16_t[m_nbChapitres];

    for(uint8_t i = 0; i<m_nbChapitres; ++i )
        this->m_dureesChapitres[i] = f.m_dureesChapitres[i];
}


/*!
*  \brief Assigne f au film et retourne une référence sur ce film.
*
*  \param f : le film à copier.
*
*  \return : une référence sur lui meme.
*/
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

/*!
*  \brief Destructeur
*/
Film::~Film()
{
    cout<<"Film::~Film() has destroyed : "<<this<<endl;
    delete m_dureesChapitres;
}

/*!
*  \brief Modifie la durée des chapitres du film.
*
*  \param dureesChapitres : un tableau d'entiers contenant la durée de chaque chapitre en secondes.
*  \param nbChapitres : le nombre de chapitres i.e la taille du tableau dureesChapitres.
*/
void Film::setDureesChapitres(uint16_t* dureesChapitres, const uint8_t nbChapitres)
{
    delete m_dureesChapitres;

    m_nbChapitres = nbChapitres;
    m_dureesChapitres = new uint16_t[nbChapitres];

    for(uint8_t i = 0; i<nbChapitres; ++i )
        m_dureesChapitres[i] = dureesChapitres[i];

}

/*!
*  \param : un pointeur sur un entier pour récupérer la taille du tableau contenant les durées des chapitres du film.
*  \return un tableau d'entiers contenant la durée de chaque chapitre en secondes.
*/
uint16_t* Film::getDureesChapitres(uint8_t* nbChapitres)
{
    *nbChapitres = m_nbChapitres;
    uint16_t* dureesChapitres = new uint16_t[m_nbChapitres];

    for(uint8_t i = 0; i<m_nbChapitres; ++i )
        dureesChapitres[i] = m_dureesChapitres[i];

    return dureesChapitres;

}

/*!
*  \brief Affiche les informations sur le film.
*/
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

/*!
*  \brief Lance le film avec vlc.
*  \return -1 en cas d'erreur.
*/
int Film::play(void)
{
    std::string command;
    command = "vlc " + this->m_pathname + "&";
    return system(command.c_str());
}
