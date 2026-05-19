#include "Wcat.h"

Wcat::Wcat()
{
    std::cout << "Wcat default constructor called" << std::endl;
    type = "Wcat";
}

Wcat::Wcat(const Wcat& o) : Wanimal(o)
{
    std::cout << "Wcat copy constructor called" << std::endl;
}

Wcat& Wcat::operator= (const Wcat& o)
{
    std::cout << "Wcat copy assignment operator called" << std::endl;
    if (this != &o)
        Wanimal::operator=(o);
    return *this;
}

Wcat::~Wcat()
{
    std::cout << "Wcat destructor called" << std::endl;
}

void Wcat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
