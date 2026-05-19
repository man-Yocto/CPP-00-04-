#pragma once
#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat& o);
	Cat& operator=(const Cat& o);
	~Cat();
	void makeSound() const;
	Brain* getBrain() const;
};
