#include <iostream>
#include "function.h"

using namespace std;

bool choixGenre() {
    char genre;
    cout << "Veuillez choisir le genre du sportif (h pour homme, f pour femme) : ";
    cin >> genre;

    switch (genre) {
        case 'h':
        case 'H':
            return true;
        case 'f':
        case 'F':
            return false;
        default:
            cout << "Genre invalide. Veuillez réessayer." << endl;
            return choixGenre();
    }
}

void saisieInfoPersonne(string& prenom, unsigned int& age, bool& homme) {
    cout << "Veuillez saisir le prénom du sportif : ";
    cin >> prenom;

    cout << "Veuillez saisir l'âge du sportif : ";
    cin >> age;

    homme = choixGenre();
}

void calculerZonesEndurance(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax) {
    FCMin = 0.5 * FCRéserve + FCRepos;
    FCMax = 0.7 * FCRéserve + FCRepos;
}

void calculerZonesAnaerobie(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax) {
    FCMin = 0.7 * FCRéserve + FCRepos;
    FCMax = 0.85 * FCRéserve + FCRepos;
}

void calculerZonesAerobie(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax) {
    FCMin = 0.85 * FCRéserve + FCRepos;
    FCMax = 0.95 * FCRéserve + FCRepos;
}
