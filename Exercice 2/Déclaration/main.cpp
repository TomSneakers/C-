#include <iostream>
using namespace std;

int main()
{
    //  Déclaration
    int hauteurMeuble;
    double temperatureExterieure;

    //  Déclaration et initialisation
    bool ilPleut = false;
    char sortir('N');

    //  Affectation
    temperatureExterieure = 27.89;
    hauteurMeuble = 73;
    ilPleut = true;
    sortir = 'Y';

    cout << "sortie= " << sortir << " à l'adresse " << &sortir << endl;
    cout << "hauteurMeuble= " << hauteurMeuble << " à l'adresse " << &hauteurMeuble << endl << endl;

#pragma region  C++ 11 a 20
    auto pi = cos(-1);    // double...
    auto sizePi = sizeof(pi); // int...
    cout << "pi=" << pi << " de taille " << sizePi << " octets" << endl;

    decltype(hauteurMeuble) unEntier;
    decltype(hauteurMeuble + 1.0) unDouble(pi);
    decltype(ilPleut && temperatureExterieure > 25.0) unBool;

    cout << "unEntier de taille " << sizeof(unEntier) << " octets" << endl;
    cout << "unDouble de taille " << sizeof(unDouble) << " octets" << endl;
    cout << "unBool de taille " << sizeof(unBool) << " octets" << endl;

    using cus = const unsigned short;
    cus unUnsignedShort(127);
    cout << "unUnsignedShort = " << static_cast<int>(unUnsignedShort) << " de taille " << sizeof(unUnsignedShort) << " octets" << endl;
#pragma endregion

#pragma region Borne des types numeriques
    unsigned char a = 254;
    std::cout << (int)a << std::endl;

    a = a + 1; // 255
    std::cout << (int)a << std::endl;

    a++; // 0
    std::cout << (int)a << std::endl;

    a += 1; // 1
    std::cout << (int)a << std::endl;

    a = 'A';
    std::cout << (int)a << std::endl;
    std::cout << a << std::endl;

#pragma endregion
}
