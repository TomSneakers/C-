#include <iostream>

int main() {
    int a = 1;
    int b = 5;
    float f = 3.14;
    char c = 'C';
    int d;
    
    std::cout << "Valeur de a : " << a << ", Adresse de a : " << &a << std::endl;
    std::cout << "Valeur de b : " << b << ", Adresse de b : " << &b << std::endl;
    std::cout << "Valeur de f : " << f << ", Adresse de f : " << &f << std::endl;
    std::cout << "Valeur de c : " << c << ", Adresse de c : " << static_cast<void*>(&c) << std::endl;
    std::cout << "Adresse de d : " << static_cast<void*>(&d) << std::endl;

    d = 'D';
    std::cout << "Valeur de d : " <<static_cast<char>(d) << ", Adresse de d : " << static_cast<void*>(&d) << std::endl;

    int temp = a;
    a = b;
    b = temp;
    std::cout << "Après permutation : a = " << a << ", b = " << b << std::endl;

    float tempFloat = a;
    a = f;
    f = tempFloat;
    std::cout << "Après permutation : a = " << a << ", f = " << f << std::endl;

    a = f;
    std::cout << "Après affectation : a = " << a << ", f = " << f << std::endl;

    d = 90;
    std::cout << "Après affectation : d = " << static_cast<int>(d) << std::endl;

    d += 255;
    std::cout << "Après addition : d = " << static_cast<int>(d) << std::endl;

    return 0;
}
