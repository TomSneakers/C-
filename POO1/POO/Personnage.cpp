//
//  Personnage.cpp
//  POO
//
//  Created by Gaspar Musitelli on 14/06/2023.
//

#include "Personnage.hpp"

namespace Personnages
{

Personnage::Personnage(std::string nom)
    : m_nom(nom)
    , m_vie(10.0)
    , m_niveau(1)
{};

Personnage::~Personnage() {};

bool Personnage::Attaquer(Personnage* ennemi)
{
    if(ennemi->EstVivant())
    {
        double vieLogique = ennemi->m_vie - (m_vie*m_niveau)/20;
        if(vieLogique < 0)
            ennemi->m_vie = 0;
        else
            ennemi->m_vie = vieLogique;
        ennemi->Defendre(this);
        return ennemi->EstVivant();
    }
    return false;
}

bool Personnage::EstVivant() const
{
    return m_vie > 0;
}

bool Personnage::Defendre(Personnage* attaquant)
{
    return Attaquer(attaquant);
}

}; // namespace Personnages
