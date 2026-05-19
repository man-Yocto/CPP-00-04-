#include "Cat.h"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& o) : AAnimal(o)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*o.brain);
}

Cat& Cat::operator=(const Cat& o)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &o)
	{
		AAnimal::operator=(o);
		delete brain;
		brain = new Brain(*o.brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}

