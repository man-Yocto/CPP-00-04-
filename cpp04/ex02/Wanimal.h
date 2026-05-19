#pragma once
#include <iostream>
#include <string>

class Wanimal
{
protected:
    std::string type;
public:
    Wanimal();
    Wanimal(const Wanimal& o);
    Wanimal& operator= (const Wanimal& o);
    ~Wanimal();
    void makeSound() const;
    std::string getType() const;

};