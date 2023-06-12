#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Entrez votre âge : ";
    cin >> age;

    if (age >= 6 && age <= 9) {
        cout << "Catégorie : pré-poussin" << endl;
    } else if (age >= 10 && age <= 11) {
        cout << "Catégorie : poussin" << endl;
    } else if (age >= 12 && age <= 13) {
        cout << "Catégorie : benjamin" << endl;
    } else if (age >= 14 && age <= 15) {
        cout << "Catégorie : minime" << endl;
    } else if (age >= 16 && age <= 17) {
        cout << "Catégorie : cadet" << endl;
    } else if (age >= 18) {
        cout << "Catégorie : senior" << endl;
    } else {
        cout << "Âge invalide." << endl;
    }

    return 0;
}
