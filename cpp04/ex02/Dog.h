#pragma once
#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog& o);
	Dog& operator=(const Dog& o);
	~Dog();
	void makeSound() const;
	Brain* getBrain() const;
};