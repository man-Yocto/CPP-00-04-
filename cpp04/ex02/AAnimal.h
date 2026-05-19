#pragma once
#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal& o);
	AAnimal& operator=(const AAnimal& o);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};
