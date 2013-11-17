#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"

using namespace std;


int main()
{

    Film * v1 = new Film("Pearl Harbor", 0, "/home/yafeunteun/Vidéo/pearlharbor_2001.avi", 210*60);
    v1->affiche();
    if(!(v1->play()))
    {
        cerr<<"Erreur lors de l'ouverture du fichier "<<v1->getNom()<<endl;
    }

    delete v1;

    Photo * p1 = new Photo("Oléron", 0, "/home/yafeunteun/Bureau/282.JPG", "Oléron");
    p1->affiche();
    if(!(p1->play()))
    {
        cerr<<"Erreur lors de l'ouverture du fichier "<<p1->getNom()<<endl;
    }

    delete p1;

    return 0;
}

