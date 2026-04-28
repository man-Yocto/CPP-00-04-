#include "Fixed.h"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixedValue = 0;
}

Fixed::Fixed(int v)
{
    std::cout << "Int constructor called\n";
    fixedValue = v << fractionalBits;
}

Fixed::Fixed(float v)
{
    std::cout << "Float constructor called\n";
    fixedValue = roundf(v * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& x)
{
    std::cout << "Copy constructor called\n";   
    this->fixedValue = x.fixedValue;
}

Fixed& Fixed::operator=(const Fixed& x)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &x)
    {
        this->fixedValue = x.fixedValue;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return this->fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)fixedValue / (1 << fractionalBits); 
}

int Fixed::toInt(void) const
{
    return fixedValue >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
