// H-File

#include <iostream>

class Complex{
    friend std::ostream& operator<<(std::ostream& os, const Complex& number);

    public:
        Complex(double re=0, double im=0);

    private:
        double re;
        double im;
};

std::ostream& operator<<(std::ostream& os, const Complex& number);

// C++-File

#include "complex.h"
#include <iostream>

Complex::Complex(double _re , double _im){
    re = _re;
    im = _im;
}

std::ostream& operator<<(std::ostream& os, const Complex& number){
    os << number.re << (number.im >=0? "+":"") << number.im << "j";
    return os;
}