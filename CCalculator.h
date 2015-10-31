#ifndef CCALCULATOR_H
#define CCALCULATOR_H

#include <cmath>
#include <complex>


class CCalculator {
public:

    //ax^2+bx+xc = d;
    std::pair< std::complex <double>, std::complex <double> > quadraticEquation(double a, double b, double c, double d =0)
    {
        c = c - d;
        if ( b*b - 4*a*c > 0) {
            std::complex<double> x( ( -b + sqrt( b*b - 4*a*c ) ) / ( 2 * a ) );
            std::complex<double> y( ( -b - sqrt( b*b - 4*a*c ) ) / ( 2 * a ) );
            return std::make_pair< std::complex <double>, std::complex <double> >( x, y );
        } else {
            std::complex<double> x( -b / ( 2 * a ), ( sqrt( 4*a*c - b*b ) ) / ( 2 * a ) );
            std::complex<double> y( -b / ( 2 * a ),  ( -sqrt( 4*a*c - b*b ) ) / ( 2 * a ) );
            return std::make_pair< std::complex <double>, std::complex <double> >( x, y );
        }
    }
};

#endif // CCALCULATOR_H
