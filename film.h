#ifndef FILM_H
#define FILM_H

/*!
 * \file Film.h
 * \brief Gestionnaire de fichiers films.
 * \author yann feunteun
 */


#include "video.h"
#include <stdint.h>

/*! \class Film
* \brief Cette classe dérive de la classe Video.
*
*  Une particularité des films est qu'ils sont composés de plusieurs chapitres ce qui permet d'accéder rapidement
*  à une partie du film.
*
*/

class Film : public Video
{
private:
    uint16_t* m_dureesChapitres;       // tableau contenant la durée de chaque chapitres.
    uint8_t m_nbChapitres;              // contient le nombre de chapitres i.e la taille du tableau de chapitres.
public:
    using Video::Video;                 // Héritage des constructeurs de la classe mère (pur C++ 2011)
    Film(const string& nom, const unsigned long long date, const string& pathname, const uint32_t duree,  uint16_t* dureesChapitres, const uint8_t nbChapitres );
    Film(const Film& f);
    virtual ~Film();
    void setDureesChapitres(uint16_t* dureesChapitres, const uint8_t nbChapitres ); // modifieur permettant de passer en argument un tableau de durées
    uint16_t* getDureesChapitres(uint8_t* nbChapitres); // accesseur retournant le tableau de durées et le nombre de chapitres
                                                        // (ce dernier est "placé" dans un paramètre passé par adresse.
    void affiche();
    Film& operator=(const Film& f);
    virtual int play(void);

};

#endif // FILM_H
