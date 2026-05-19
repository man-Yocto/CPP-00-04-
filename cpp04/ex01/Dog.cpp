#include "Dog.h"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& o) : Animal(o)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*o.brain);
}

Dog& Dog::operator=(const Dog& o)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &o)
	{
		Animal::operator=(o);
		delete brain;
		brain = new Brain(*o.brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}
