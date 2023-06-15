//
//  Heros.hpp
//  POO
//
//  Created by Gaspar Musitelli on 14/06/2023.
//

#ifndef Heros_hpp
#define Heros_hpp

#include <stdio.h>
#include "Personnage.hpp"

namespace Personnages
{

class Heros: public Personnage
{
public:
    Heros(std::string nom, int niveau = 2);
    ~Heros();
};

}; // namespace Personnages

#endif /* Heros_hpp */
