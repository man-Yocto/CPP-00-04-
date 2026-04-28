#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
    private:
        static const int fractionalBits = 8;
        int fixedValue;
    public:
        Fixed();
        Fixed (const Fixed& x);
        Fixed &operator =(const Fixed & x);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif