#include <iostream>
#include <string>

using namespace std;

bool choixGenre() {
    char genre;
    cout << "Veuillez choisir le genre du sportif (h pour homme, f pour femme) : ";
    cin >> genre;

    switch (genre) {
        case 'h':  // Si le genre est 'h' (homme) ou 'H'
        case 'H':
            return true;  // Retourne true pour homme
        case 'f':  // Si le genre est 'f' (femme) ou 'F'
        case 'F':
            return false;  // Retourne false pour femme
        default:
            cout << "Genre invalide. Veuillez réessayer." << endl;
            return choixGenre();  // Demande de nouveau la saisie du genre
    }
}

void saisieInfoPersonne(string& prenom, string& nom, unsigned int& age, unsigned int& poids, bool& homme) {
    cout << "Veuillez saisir le prénom du sportif : ";
    cin >> prenom;
    
    cout << "Veuillez saisir le nom du sportif : ";
    cin >> nom;
    
    cout << "Veuillez saisir l'âge du sportif : ";
    cin >> age;
    if ( age > 90){
        cout << "\t Arretez le sport " << endl;
        }
    cout << "Veuillez saisir le poids du sportif : ";
    cin >> poids;
    if ( poids > 90){
        cout << "\t Vous êtes trop gros " << endl;
        }
    homme = choixGenre();  // Appelle la fonction choixGenre() pour obtenir le genre du sportif
  
    if (homme) {
            cout << "\n"  << prenom <<" "<< nom <<" , vous êtes un homme de "<< age << " ans de " << poids << " kg"<<endl;
        } else {
            cout << "\n" << prenom <<" "<< nom <<" , vous êtes un femme de "<< age << " ans de " << poids << " kg"<< endl;
        }
};
   
int main() {
    string prenom;
    string nom;
    unsigned int age;
    unsigned int poids;
    bool homme;

    saisieInfoPersonne(prenom, nom, age,poids , homme);  // Saisie des informations sur le sportif

    unsigned int FCREPO;
    cout << "Veuillez saisir la fréquence cardiaque au repos : ";
    cin >> FCREPO;

    unsigned int FCMax;
    if (homme) {
        FCMax = 220 - age;  // Calcul de la fréquence cardiaque maximale pour un homme
    } else {
        FCMax = 226 - age;  // Calcul de la fréquence cardiaque maximale pour une femme
    }

    unsigned int FCR = FCMax - FCREPO;  // Calcul de la fréquence cardiaque de réserve
//Affiche les informations sur les fréquences cardiaque
    cout << "FCMax : " << FCMax << " bpm" << endl;
    cout << "FCR(FCMax – FCREPO) : " << FCR << " bpm" << endl;
//choix des séances(menue)
    cout << "Menu : " << endl;
    cout << "1. Séance en Endurance" << endl;
    cout << "2. Séance en Anaérobie" << endl;
    cout << "3. Séance en Aérobie" << endl;

    int choix;
    cout << "Veuillez choisir le type de séance : ";
//entree du choix (1, 2 ou 3)
    cin >> choix;
    
    unsigned int FCMin = 0; // Initialisation de FCMin avec une valeur par défaut

    switch (choix) {
        case 1:  // Si l'utilisateur choisit l'endurance
            FCMin = 0.5 * FCR + FCREPO;  // Calcul de la fréquence cardiaque minimale pour l'endurance
            FCMax = 0.7 * FCR + FCREPO;  // Calcul de la fréquence cardiaque maximale pour l'endurance
            break;
        case 2:  // Si l'utilisateur choisit l'anaérobie
            FCMin = 0.7 * FCR + FCREPO;  // Calcul de la fréquence cardiaque minimale pour l'anaérobie
            FCMax = 0.85 * FCR + FCREPO;  // Calcul de la fréquence cardiaque maximale pour l'anaérobie
            break;
        case 3:  // Si l'utilisateur choisit l'aérobie
            FCMin = 0.85 * FCR + FCREPO;  // Calcul de la fréquence cardiaque minimale pour l'aérobie
            FCMax = 0.95 * FCR + FCREPO;  // Calcul de la fréquence cardiaque maximale pour l'aérobie
            break;
            // Revient au debut du choix si l'utilisateur a saisi un chiffre > 3
            // Aide d'internet https://c.developpez.com/cours/bernard-cassagne/node51.php
        default:
            cout << "Choix invalide. Veuillez saisir votre choix (de 1 à 3) : ";
            cin >> choix;
    }


    cout << "Fréquence cardiaque minimale : " << FCMin << " bpm" << endl;
    cout << "Fréquence cardiaque maximale : " << FCMax << " bpm" << endl;

    return 0;
}
