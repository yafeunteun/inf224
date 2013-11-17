#ifndef PHOTO_H
#define PHOTO_H

/*!
 * \file Photo.h
 * \brief Gestionnaire de fichiers photos.
 * \author yann feunteun
 */



#include "multimedia.h"
#include <stdint.h>

/*! \class Photo
* \brief Permet la gestion de fichiers photos.
*
*   Cette classe dérive de la classe Multimédia.
*/


class Photo : public Multimedia
{
public:
    Photo(const string& nom = "Photo de profil", const unsigned long long int date = 0, const string& pathname = "./profile.jpeg", const string& localisation = "Bretagne");
    const string getLocalisation(void) const;
    void setLocalisation(const string& localisation);
    void affiche(void) const;
    int play(void);
private:
    string m_localisation;      // lieu de prise de la photo
};

#endif // PHOTO_H
