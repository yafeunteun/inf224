#ifndef PHOTO_H
#define PHOTO_H

#include "multimedia.h"
#include <stdint.h>


class Photo : public Multimedia
{
public:
    Photo(string nom = "Photo de profil", unsigned long long int date = 0, string pathname = "./profile.jpeg", string localisation = "Bretagne");
    string getLocalisation(void) const;
    void setLocalisation(string localisation);
    void affiche(void) const;
private:
    string m_localisation;      // lieu de prise de la photo
};

#endif // PHOTO_H
