 #include "Fixed.h"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixedValue = 0;
}
Fixed::Fixed (const Fixed& x)
{
    std::cout << "Copy constructor called\n";   
    this->fixedValue = x.fixedValue;
}
Fixed& Fixed::operator =(const Fixed & x)
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
int Fixed::getRawBits( void ) const
{
    return this->fixedValue;
}
void Fixed::setRawBits( int const raw )
{
    this->fixedValue = raw;
}