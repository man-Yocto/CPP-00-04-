#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& o);
    Dog& operator= (const Dog& o);
    ~Dog();
    void makeSound() const;
};