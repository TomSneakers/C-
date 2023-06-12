#include <iostream>
using namespace std;

int main() {
    int note;
    int total = 0;
    int count = 0;

    cout << "Entrez les notes (entre 0 et 20). Tapez -1 pour terminer : " << endl;

    while (true) {
        cout << "Note : ";
        cin >> note;

        if (note == -1) {
            break;
        }

        if (note >= 0 && note <= 20) {
            total += note;
            count++;
        } else {
            cout << "Note invalide. Veuillez saisir une note entre 0 et 20." << endl;
        }
    }

    if (count > 0) {
        double moyenne = static_cast<double>(total) / count;
        cout << "Moyenne des notes : " << moyenne << endl;
    } else {
        cout << "Aucune note valide saisie." << endl;
    }

    return 0;
}
