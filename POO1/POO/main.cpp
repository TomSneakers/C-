//
//  main.cpp
//  POO
//
//  Created by Gaspar Musitelli on 14/06/2023.
//

#include <iostream>
#include "Personnage.hpp"
#include "Heros.hpp"

using namespace Personnages;

int main(int argc, const char * argv[]) {
    
    Personnage prsn1 = Personnage("Guethenoc");
    printf("Prénom : %s\nVie : %.1lf\nNiveau : %d\n", prsn1.GetNom().c_str(), prsn1.GetVie(), prsn1.GetNiveau());
    
    Personnage* prsn2 = new Personnage("Balcmeg");
    printf("Prénom : %s\nVie : %.1lf\nNiveau : %d\n", prsn2->GetNom().c_str(), prsn2->GetVie(), prsn2->GetNiveau());
    
    Heros hero1 = Heros("Gollum");
    printf("Prénom : %s\nVie : %.1lf\nNiveau : %d\n", hero1.GetNom().c_str(), hero1.GetVie(), hero1.GetNiveau());
    
    Personnage* hero2 = new Heros("Frodon", 10);
    printf("Prénom : %s\nVie : %.1lf\nNiveau : %d\n", hero2->GetNom().c_str(), hero2->GetVie(), hero2->GetNiveau());
    
    prsn1.Attaquer(prsn2);
    printf("%s (%.1lf pv) attaque %s (%.1lf pv).\n", prsn1.GetNom().c_str(), prsn1.GetVie(), prsn2->GetNom().c_str(), prsn2->GetVie());
    
    hero2->Attaquer(&hero1);
    printf("%s (%.1lf pv) attaque %s (%.1lf pv).\n", hero2->GetNom().c_str(), hero2->GetVie(), hero1.GetNom().c_str(), hero1.GetVie());
    return 0;
}
