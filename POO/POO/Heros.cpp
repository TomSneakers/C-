//
//  Heros.cpp
//  POO
//
//  Created by Tom DESVIGNES on 14/06/2023.
//

#include "Heros.hpp"

namespace Personnages
{

Heros::Heros(std::string nom, int niveau /* = 2 */)
    : Personnage(nom)
{
    m_niveau = niveau;
};

Heros::~Heros() {};

}; // namescpace Personnages
