#include "AAnimal.h"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
	type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal& o)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	type = o.type;
}

AAnimal& AAnimal::operator=(const AAnimal& o)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &o)
		type = o.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}
