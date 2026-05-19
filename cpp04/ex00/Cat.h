#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& o);
    Cat& operator= (const Cat& o);
    ~Cat();
    void makeSound() const;   
};