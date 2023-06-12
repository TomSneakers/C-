#include <iostream>
using namespace std;

int main() {
    int i1 = 1;
    int i2 = 3;
    int r1;

    r1 = i1 / i2;
    cout << "Résultat de la division de i1 par i2 : " << r1 << endl;

    float d1 = 1.0;
    float d2 = 3.0;
    float r2;

    r2 = i1 / i2;
    cout << "Résultat de la division de i1 par i2 (en utilisant des entiers) : " << r2 << endl;

    r2 = d1 / i2;
    cout << "Résultat de la division de d1 par i2 : " << r2 << endl;

    r2 = i1 / d2;
    cout << "Résultat de la division de i1 par d2 : " << r2 << endl;

    r2 = d1 / d2;
    cout << "Résultat de la division de d1 par d2 : " << r2 << endl;

    return 0;
}
