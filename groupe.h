#ifndef GROUPE_H
#define GROUPE_H

#include <list>
#include "multimedia.h"

using std::list;


class Groupe : public list<Multimedia*>
{
private:
    std::string m_nom;
public:
    Groupe(const std::string& nom);
    ~Groupe();

    const std::string& getNom(void) const;
    void Affichage(void);
};

#endif // GROUPE_H
