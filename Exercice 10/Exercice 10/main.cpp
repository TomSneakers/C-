#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string tireUneCarte(int nbCartes) {
    string cartes32[] = { "7_coeur", "8_coeur", "9_coeur", "10_coeur", "valet_coeur", "dame_coeur", "roi_coeur", "as_coeur",
                          "7_carreau", "8_carreau", "9_carreau", "10_carreau", "valet_carreau", "dame_carreau", "roi_carreau", "as_carreau",
                          "7_pique", "8_pique", "9_pique", "10_pique", "valet_pique", "dame_pique", "roi_pique", "as_pique",
                          "7_trèfle", "8_trèfle", "9_trèfle", "10_trèfle", "valet_trèfle", "dame_trèfle", "roi_trèfle", "as_trèfle" };

    string cartes54[] = { "7_coeur", "8_coeur", "9_coeur", "10_coeur", "valet_coeur", "dame_coeur", "roi_coeur", "as_coeur",
                          "7_carreau", "8_carreau", "9_carreau", "10_carreau", "valet_carreau", "dame_carreau", "roi_carreau", "as_carreau",
                          "7_pique", "8_pique", "9_pique", "10_pique", "valet_pique", "dame_pique", "roi_pique", "as_pique",
                          "7_trèfle", "8_trèfle", "9_trèfle", "10_trèfle", "valet_trèfle", "dame_trèfle", "roi_trèfle", "as_trèfle",
                          "joker_1", "joker_2" };

    int nbCartesTotal;
    string* jeuCartes;

    if (nbCartes == 32) {
        nbCartesTotal = 32;
        jeuCartes = cartes32;
    } else if (nbCartes == 54) {
        nbCartesTotal = 54;
        jeuCartes = cartes54;
    } else {
        return "Type de jeu de cartes non pris en charge.";
    }

    srand(time(0)); // Initialisation du générateur de nombres aléatoires

    int indice = rand() % nbCartesTotal; // Tirage aléatoire d'un indice

    return jeuCartes[indice];
}

int main() {
    cout << "Tirage d'une carte d'un jeu de 32 cartes : " << tireUneCarte(32) << endl;
    cout << "Tirage d'une carte d'un jeu de 54 cartes : " << tireUneCarte(54) << endl;
    cout << "Tirage d'une carte d'un jeu de 100 cartes : " << tireUneCarte(100) << endl;

    return 0;
}
