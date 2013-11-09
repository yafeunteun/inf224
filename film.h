#ifndef FILM_H
#define FILM_H

#include "video.h"
#include <stdint.h>

class Film : public Video
{
private:
    uint16_t* m_dureesChapitres;       // tableau contenant la durée de chaque chapitres.
    uint8_t m_nbChapitres;              // contient le nombre de chapitres i.e la taille du tableau de chapitres.
public:
    Film(string nom, unsigned long long date, string pathname, uint32_t duree);
    Film(string nom, unsigned long long date, string pathname, uint32_t duree, uint16_t* dureesChapitres, uint8_t nbChapitres );
    Film(const Film& f);
    virtual ~Film();
    void setDureesChapitres(uint16_t* dureesChapitres, uint8_t nbChapitres ); // modifieur permettant de passer en argument un tableau de durées
    uint16_t* getDureesChapitres(uint8_t* nbChapitres); // accesseur retournant le tableau de durées et le nombre de chapitres
                                                        // (ce dernier est "placé" dans un paramètre passé par adresse.
    void affiche();
    Film& operator=(const Film& f);

};

#endif // FILM_H
