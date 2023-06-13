#include <iostream>

void remplirTab(int tableau[], int taille) {
    std::cout << "Saisissez les entiers pour remplir le tableau :\n";
    for (int i = 0; i < taille; i++) {
        std::cin >> tableau[i];
    }
}

int* copie(const int tableau[], int taille) {
    int* nouveauTableau = new int[taille];

    for (int i = 0; i < taille; i++) {
        nouveauTableau[i] = tableau[i];
    }

    return nouveauTableau;
}

int main() {
    const int tailleFixe = 5;
    int tableauFixe[tailleFixe];

    remplirTab(tableauFixe, tailleFixe);

    int* nouveauTableau = copie(tableauFixe, tailleFixe);
    
    std::cout << "Tableau rempli : ";
      for (int i = 0; i < tailleFixe; i++) {
          std::cout << tableauFixe[i] << " ";
      }
    
    std::cout << "Nouveau tableau (copie) : ";
    for (int i = 0; i < tailleFixe; i++) {
        std::cout << nouveauTableau[i] << " ";
    }
    std::cout << std::endl;

    delete[] nouveauTableau;

    return 0;
}

