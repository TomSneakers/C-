//
//  Repas.cpp
//  Revision
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include "Repas.hpp"
#include <iostream>
using namespace std;
Repas::Menu* Repas::Menu:: SetEntree(Plat* entree)
{
    this->entree= entree;
    return this;
}

string Repas::Menu::VerifierMenu()
{
    string tmp= "Le menu" + this ->typeMenu + "est composé de ";
    if (entree !=nullptr)
    {
        tmp += "- Entree: ";
        tmp += entree->GetNom();
    }
    else
    {
        tmp += "-Pas d'entree";
    } return tmp;
}

Repas::Menu:: Menu()
{
    
}
Repas::Menu::Menu(string type)
{
    this->typeMenu = type;
#ifdef TRACE
    cout << "=> Menu(" << this->typeMenu << ") de " << this << endl;
#endif
}

Repas::Menu::~Menu()
{
#ifdef TRACE
    cout << "=> Destructeur de" << this->typeMenu << "a"<< this << endl;
#endif
}
