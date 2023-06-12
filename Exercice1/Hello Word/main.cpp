#include <iostream>
#include "Foo.hpp"


int main()
{
    std::cout << "Hello World!\n";

    Foo obj;
    std::cout << "Instanciation Foo: " << &obj << ", val=" << obj.GetVal() << std::endl;

    const int cent_soixante_dix = 0b0000'0000'1010'1010;
    Foo other(cent_soixante_dix);
    std::cout << "Instanciation Foo(int): " << &other << ", val=" << other.GetVal() << std::endl;

}
