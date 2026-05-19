#pragma once
#include "Wanimal.h"

class Wcat : public Wanimal
{
public:
    Wcat();
    Wcat(const Wcat& o);
    Wcat& operator= (const Wcat& o);
    ~Wcat();
    void makeSound() const;   
};
