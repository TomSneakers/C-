//
//  main.cpp
//  Revision
//
//  Created by Tom Desvignes on 15/06/2023.
//

#include <iostream>
#include "Plat.hpp"
#include"Repas.hpp"

using namespace Repas;
using namespace std;
int main()
{
    cout <<"--DEBUT--" << endl<<endl;
    
    Plat entree("Tomate Mozza");
    cout << "Entree:" << entree.GetNom() << endl;
    cout << entree.Manger() << endl << endl;
    
    Plat* principal;
    principal  = new Plat ("Pates au pistou");
    cout << "Principal: " << principal->GetNom()<< endl;
    cout << principal->Manger()<<endl<<endl;
    
    
    Menu menu_1("standard");
    cout << "Menu 1: " << menu_1.GetTypeMenu() << endl;
    menu_1.SetEntree(&entree);
    menu_1.VerifierMenu();
    Menu* menu_2;
    menu_2 = new Menu ("Vegan");
    cout << "Menu 2: " << menu_2->GetTypeMenu() << endl;
    
    Menu* menu_3;
    menu_3 = new Menu ("Burger du chef");
    cout << "Menu 3: " << menu_3->GetTypeMenu() << endl << endl;
    
    delete principal;
    delete menu_2;
    cout << "--Fin--" << endl <<endl;
}
