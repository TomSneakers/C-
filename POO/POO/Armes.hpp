//
//  Armes.hpp
//  POO
//
//  Created by Tom Desvignes on 14/06/2023.
//

#ifndef Armes_hpp
#define Armes_hpp
#include "Personnage.hpp"
#include <stdio.h>
#ifndef ARMES_H
#define ARMES_H

#include <string>

namespace Personnages
{
    class Armes
    {
    public:
        Armes(const std::string& nom, int degats);

        const std::string& GetNom() const;
        int GetDegats() const;

    private:
        std::string m_nom;
        int m_degats;
    };
}

#endif

#endif /* Armes_hpp */
