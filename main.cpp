#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"

using namespace std;

// PROTOCOLE DE TEST DE L ETAPE 6 :

// Implementez votre classe et vérifiez que le resultat est correct en détruisant le tableau passé en argument dans main()
    // puis en appelant la fonction d'affichage de l'objet (NB: il faut répéter ces opérations pour plusieurs objets pour être sûr
    // qu'il n'y a pas d'erreur à l'exécution).


int main()
{
    Film* f1 = new Film("Pearl Harbor", 0, "/home/yafeunteun/Videos/ph.avi", 183*60 );
    Film* f2 = new Film("Armageddon", 0, "/home/yafeunteun/Videos/argd.avi", 145*60 );
    Film* f3 = new Film("Gladiator", 0, "/home/yafeunteun/Videos/gldr.avi", 155*60);

    uint16_t* tabChap1 = new uint16_t[7];
    uint16_t* tabChap2 = new uint16_t[7];
    uint16_t* tabChap3 = new uint16_t[7];

    for(unsigned char i = 0; i < 7; ++i )
    {
        tabChap1[i] = 21;
        tabChap2[i] = 15;
        tabChap3[i] = 17;
    }

    f1->setDureesChapitres(tabChap1, 7);
    f2->setDureesChapitres(tabChap2, 7);
    f3->setDureesChapitres(tabChap3, 7);

    delete tabChap1;
    delete tabChap2;
    delete tabChap3;

    f1->affiche();
    f2->affiche();
    f3->affiche();


    return 0;
}

