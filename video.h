#ifndef VIDEO_H
#define VIDEO_H


/*!
 * \file Film.h
 * \brief Gestionnaire de fichiers vidéos.
 * \author yann feunteun
 */


#include "multimedia.h"
#include <stdint.h>

/*! \class Video
* \brief Permet la gestion de fichiers vidéos.
*
*   Cette classe dérive de la classe Multimédia.
*/

class Video : public Multimedia
{
public:
    Video(const string& nom = "Toto the movie", const unsigned long long int date = 0, const string& pathname = "./toto_the_movie.avi", const  uint32_t duree = 10800);
    virtual ~Video();
    uint32_t getDuree(void) const;
    void setDuree(const uint32_t duree);
    void affiche(void) const;
    virtual int play(void);
protected:
    uint32_t m_duree;  // durée en secondes

};

#endif // VIDEO_H
