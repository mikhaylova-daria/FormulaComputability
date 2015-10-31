#include <iostream>
#include <iomanip>
#include "CCalculator.h"
using namespace std;

int main()
{
    CCalculator calculator;
    std::pair < std::complex< double >, std::complex< double > > result = calculator.quadraticEquation(1, 2, 1);
    cout << result.first.real() << " " << result.first.imag()<<std::endl;
    cout <<  result.second.real() << " " << result.second.imag()<<std::endl;
    cout << "Hello World!" << endl;
    return 0;
}

