#pragma once
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
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
