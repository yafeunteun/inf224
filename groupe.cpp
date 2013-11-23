#include "groupe.h"

Groupe::Groupe(const std::string& nom) : m_nom(nom)
{
}

const std::string &Groupe::getNom() const
{
    return m_nom;
}

void Groupe::Affichage()
{
    for(std::list<Multimedia*>::iterator it = this->begin(); it != this->end(); ++it)
        (*it)->affiche();
}
