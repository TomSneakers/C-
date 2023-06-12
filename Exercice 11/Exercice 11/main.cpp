#include <iostream>
using namespace std;

template <typename T>
void permuterVariables(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int entier1 = 5, entier2 = 10;
    double reel1 = 3.14, reel2 = 2.71828;
    char caractere1 = 'A', caractere2 = 'B';

    cout << "Avant la permutation :" << endl;
    cout << "Entiers : " << entier1 << ", " << entier2 << endl;
    cout << "Réels : " << reel1 << ", " << reel2 << endl;
    cout << "Caractères : " << caractere1 << ", " << caractere2 << endl;

    permuterVariables(entier1, entier2);
    permuterVariables(reel1, reel2);
    permuterVariables(caractere1, caractere2);

    cout << "\nAprès la permutation :" << endl;
    cout << "Entiers : " << entier1 << ", " << entier2 << endl;
    cout << "Réels : " << reel1 << ", " << reel2 << endl;
    cout << "Caractères : " << caractere1 << ", " << caractere2 << endl;

    return 0;
}
