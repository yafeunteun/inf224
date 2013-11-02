#ifndef VIDEO_H
#define VIDEO_H

#include "multimedia.h"
#include <stdint.h>

class Video : public Multimedia
{
public:
    Video(string nom = "Toto the movie", unsigned long long int date = 0, string pathname = "./toto_the_movie.avi", uint32_t duree = 10800);
    uint32_t getDuree(void) const;
    void setDuree(uint32_t duree);
    void affiche(void) const;
<<<<<<< HEAD
protected:
=======
private:
>>>>>>> 55d239dc23112ae28ecd1e48819ab2bcc96d8ab8
    uint32_t m_duree;  // durée en secondes
};

#endif // VIDEO_H
