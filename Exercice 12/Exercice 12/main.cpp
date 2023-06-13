#include <iostream>

void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int tailleFixe = 5;
    int tableauFixe[tailleFixe] = {1, 2, 3, 4, 5};
    afficherTableau(tableauFixe, tailleFixe);

    // Demander la taille du tableau dynamique à l'utilisateur
    int tailleDynamique;
    std::cout << "Entrez la taille du tableau dynamique : ";
    std::cin >> tailleDynamique;

    // Créer le tableau dynamique
    int* tableauDynamique = new int[tailleDynamique];

    // Remplir le tableau dynamique avec des valeurs
    for (int i = 0; i < tailleDynamique; i++) {
        tableauDynamique[i] = i + 1;
    }

    afficherTableau(tableauDynamique, tailleDynamique);

    // Libérer la mémoire du tableau dynamique
    delete[] tableauDynamique;

    return 0;
}
