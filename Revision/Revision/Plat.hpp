//
//  Plat.hpp
//  Revision
//
//  Created by Tom Desvignes on 15/06/2023.
//

#ifndef Plats_hpp
#define Plats_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
namespace Repas {
class Plat
{
private:
    string nom;
public:
    string GetNom() {return nom;}
    Plat(string nom);
    ~Plat();
    
    string Manger();
};

}







#endif /* Plats_hpp */
