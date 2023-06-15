//
//  Armes.cpp
//  POO
//
//  Created by Tom Desvignes on 14/06/2023.
//

#include "Armes.hpp"

namespace Personnages
{
    Armes::Armes(const std::string& nom, int degats) : m_nom(nom), m_degats(degats)
    {
    }

    const std::string& Armes::GetNom() const
    {
        return m_nom;
    }

    int Armes::GetDegats() const
    {
        return m_degats;
    }
}
