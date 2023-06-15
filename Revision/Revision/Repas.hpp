//
//  Repas.hpp
//  Revision
//
//  Created by Tom Desvignes on 15/06/2023.
//

#ifndef Repas_hpp
#define Repas_hpp

#include <stdio.h>
#include <string>
#include "Plat.hpp"
using namespace std;
namespace Repas
{
class Menu{
private:
    string typeMenu;
    Plat* entree = nullptr;
public:
    string GetTypeMenu() {return typeMenu;}
    string VerifierMenu();
    // setter
    void setTypeMenue(string& type){
        this->typeMenu= type;};
    
    //setter pour realiser l'association
    Menu* SetEntree (Plat* entree);
    

    // contructeur par défaut
    Menu();
    
    // constructeur paramétré
    Menu(string type);
    
    //destructeur
    ~Menu();
};
}


#endif /* Repas_hpp */
