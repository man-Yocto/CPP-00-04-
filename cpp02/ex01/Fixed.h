#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
    private:
        static const int fractionalBits = 8;
        int fixedValue;
    public:
        Fixed();
        Fixed(int v);
        Fixed(float v);
        Fixed(const Fixed& x);
        Fixed& operator=(const Fixed& x);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
