#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "groupe.h"

using namespace std;


int main()
{

    Film * v1 = new Film("Pearl Harbor", 0, "/home/yafeunteun/Vidéo/pearlharbor_2001.avi", 210*60);

    Photo * p1 = new Photo("Oléron", 0, "/home/yafeunteun/Bureau/282.JPG", "Oléron");


    Groupe *g = new Groupe("Mes Documents");

    cout<<"Nom du groupe : "<<g->getNom()<<endl<<endl;
    g->push_back(v1);
    g->push_back(p1);

    g->Affichage();

    return 0;
}

