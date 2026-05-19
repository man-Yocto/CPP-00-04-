#include "Animal.h"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& o)
{
	std::cout << "Animal copy constructor called" << std::endl;
	type = o.type;
}

Animal& Animal::operator=(const Animal& o)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &o)
		type = o.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
