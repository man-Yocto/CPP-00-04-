#include "Cat.h"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& o) : Animal(o)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator= (const Cat& o)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &o)
        Animal::operator=(o);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

