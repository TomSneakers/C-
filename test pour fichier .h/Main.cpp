#include <iostream>
#include "function.h"

using namespace std;

int main() {
    string prenom;
    unsigned int age;
    bool homme;

    saisieInfoPersonne(prenom, age, homme);

    unsigned int FCRepos;
    cout << "Veuillez saisir la fréquence cardiaque au repos : ";
    cin >> FCRepos;

    unsigned int FCMax;
    if (homme) {
        FCMax = 220 - age;
    } else {
        FCMax = 226 - age;
    }

    unsigned int FCRéserve = FCMax - FCRepos;

    cout << "FCMax : " << FCMax << " bpm" << endl;
    cout << "FCRéserve : " << FCRéserve << " bpm" << endl;

    cout << "Menu : " << endl;
    cout << "1. Séance en Endurance" << endl;
    cout << "2. Séance en Anaérobie" << endl;
    cout << "3. Séance en Aérobie" << endl;

    int choix;
    cout << "Veuillez choisir le type de séance : ";
    cin >> choix;

    unsigned int FCMin;

    switch (choix) {
        case 1:  // Si l'utilisateur choisit l'endurance
            calculerZonesEndurance(FCRepos, FCRéserve, FCMin, FCMax);
            break;
        case 2:  // Si l'utilisateur choisit l'anaérobie
            calculerZonesAnaerobie(FCRepos, FCRéserve, FCMin, FCMax);
            break;
        case 3:  // Si l'utilisateur choisit l'aérobie
            calculerZonesAerobie(FCRepos, FCRéserve, FCMin, FCMax);
            break;
        default:
            cout << "Choix invalide." << endl;
            return 0;
    }

    cout << "Fréquence cardiaque minimale : " << FCMin << " bpm" << endl;
    cout << "Fréquence cardiaque maximale : " << FCMax << " bpm" << endl;

    return 0;
}
