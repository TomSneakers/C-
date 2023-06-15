//
//  Plat.cpp
//  Revision
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Plat.hpp"

using namespace std;
Repas::Plat::Plat(string nom)
{
    this->nom = nom;
#ifdef TRACE
    cout << "Plat(" << this->nom << ") de " << this;
    
#endif
}
Repas::Plat::~Plat()
{
#ifdef TRACE
    cout << "=>Destructeur de " << this->nom << "a" << this << endl;
#endif
}

string Repas::Plat::Manger()
{
    string temp= "je mange " + nom;
    return temp;
}
