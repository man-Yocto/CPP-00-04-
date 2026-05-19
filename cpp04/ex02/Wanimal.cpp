#include "Wanimal.h"

Wanimal::Wanimal()
{
    std::cout << "Wanimal default constructor called" << std::endl;
    type = "Wanimal";
}

Wanimal::Wanimal(const Wanimal& o)
{
    std::cout << "Wanimal copy constructor called" << std::endl;
    type = o.type;
}

Wanimal& Wanimal::operator= (const Wanimal& o)
{
    std::cout << "Wanimal copy assignment operator called" << std::endl;
    if (this != &o)
        type = o.type;
    return *this;
}

Wanimal::~Wanimal()
{
    std::cout << "Wanimal destructor called" << std::endl;
}

void Wanimal::makeSound() const
{
    std::cout << "Wanimal makes a sound" << std::endl;
}

std::string Wanimal::getType() const
{
    return type;
}