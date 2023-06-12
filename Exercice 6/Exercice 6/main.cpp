#include <iostream>
using namespace std;

int main() {
    int heure, minutes;

    cout << "Entrez l'heure actuelle (format 24h) : ";
    cin >> heure;

    cout << "Entrez les minutes actuelles : ";
    cin >> minutes;

    minutes += 1;

    if (minutes == 60) {
        minutes = 0;
        heure += 1;
    }

    if (heure == 24) {
        heure = 0;
    }

    cout << "Dans une minute, il sera " << heure << ":";

    if (minutes < 10) {
        cout << "0";
    }

    cout << minutes << endl;

    return 0;
}
