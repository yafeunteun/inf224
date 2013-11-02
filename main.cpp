#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"

using namespace std;

int main()
{

    Multimedia *tab[4];

    tab[0] = new Photo("Fichier 1");
    tab[1] = new Photo("Fichier 2");
    tab[2] = new Video("Fichier 3");
    tab[3] = new Video("Fichier 4");

    for(unsigned char i = 0; i<4; ++i)
    {
        tab[i]->affiche();
        delete tab[i];
    }


    return 0;
}

