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

bool Fixed::operator>(const Fixed& rhs) const
{
    return (this->fixedValue > rhs.fixedValue);
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return (this->fixedValue < rhs.fixedValue);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return (this->fixedValue >= rhs.fixedValue);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return (this->fixedValue <= rhs.fixedValue);
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return (this->fixedValue == rhs.fixedValue);
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return (this->fixedValue != rhs.fixedValue);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed result;
    result.fixedValue = this->fixedValue + rhs.fixedValue;
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed result;
    result.fixedValue = this->fixedValue - rhs.fixedValue;
    return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed result;
    result.fixedValue = (this->fixedValue * rhs.fixedValue) >> fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    Fixed result;
    result.fixedValue = (this->fixedValue << fractionalBits) / rhs.fixedValue;
    return result;
}

Fixed& Fixed::operator++()
{
    this->fixedValue += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->fixedValue += 1;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->fixedValue -= 1;
    return *this;   
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->fixedValue -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
