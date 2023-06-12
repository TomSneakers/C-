#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 10;
    int* p;

    p = &b;

    cout << "Valeur de p : " << p << ", Adresse de p : " << &p << ", Valeur pointée par p : " << *p << endl;

    p = &a;

    *p *= 2;

    cout << "Valeur de p : " << p << ", Adresse de p : " << &p << ", Valeur pointée par p : " << *p << endl;

    p += 1;

    cout << "Valeur de p : " << p << ", Adresse de p : " << &p << endl;

    return 0;
}
