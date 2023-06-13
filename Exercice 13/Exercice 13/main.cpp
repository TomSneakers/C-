#include <iostream>

void remplirTab(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez un nombre entier : ";
        std::cin >> tableau[i];
    }
}

int main() {
    const int tailleFixe = 7;
    int tableauFixe[tailleFixe];

    remplirTab(tableauFixe, tailleFixe);

    std::cout << "Tableau rempli : ";
    for (int i = 0; i < tailleFixe; i++) {
        std::cout << tableauFixe[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
