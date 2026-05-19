#pragma once
#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
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