#include "Foo.hpp"
#include <iostream>

Foo::Foo(int val)
{
    this->val = val;
    std::cout << "Foo(int), " << this->val << std::endl;
}

Foo::Foo() :Foo(-1)
{
    std::cout << "Foo(), " << this->val << std::endl;
}

