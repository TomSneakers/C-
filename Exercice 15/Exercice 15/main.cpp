#include <iostream>

void sortTab(int tableau[], int taille, bool ordreCroissant = true) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if ((ordreCroissant && tableau[j] > tableau[j + 1]) || (!ordreCroissant && tableau[j] < tableau[j + 1])) {
                // Échange des éléments
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    int* tableauDynamique = new int[taille];

    std::cout << "Remplissage du tableau :\n";
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez l'élément #" << i << " : ";
        std::cin >> tableauDynamique[i];
    }

    std::cout << "Tableau avant le tri : ";
    for (int i = 0; i < taille; i++) {
        std::cout << tableauDynamique[i] << " ";
    }
    std::cout << std::endl;

    sortTab(tableauDynamique, taille); // Tri par ordre croissant

    std::cout << "Tableau trié (ordre croissant) : ";
    for (int i = 0; i < taille; i++) {
        std::cout << tableauDynamique[i] << " ";
    }
    std::cout << std::endl;

    sortTab(tableauDynamique, taille, false); // Tri par ordre décroissant

    std::cout << "Tableau trié (ordre décroissant) : ";
    for (int i = 0; i < taille; i++) {
        std::cout << tableauDynamique[i] << " ";
    }
    std::cout << std::endl;

    delete[] tableauDynamique;

    return 0;
}
