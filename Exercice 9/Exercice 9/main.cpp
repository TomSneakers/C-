#include <iostream>
using namespace std;

int saisirEntierEntre(int min, int max) {
    int nombre;

    do {
        cout << "Entrez un entier entre " << min << " et " << max << " : ";
        cin >> nombre;

        if (nombre < min || nombre > max) {
            cout << "Saisie invalide. Veuillez réessayer." << endl;
        }
    } while (nombre < min || nombre > max);

    return nombre;
}

int main() {
    int entier = saisirEntierEntre(1, 10);
    cout << "Vous avez saisi l'entier : " << entier << endl;

    return 0;
}
