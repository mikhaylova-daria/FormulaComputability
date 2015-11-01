#include <iostream>
#include <iomanip>
#include "CCalculator.h"
using namespace std;

int main()
{
    std::pair < std::complex< double >, std::complex< double > > result = CCalculator::quadraticEquation(1, 2, 1);
    cout << result.first.real() << " " << result.first.imag()<<std::endl;
    cout <<  result.second.real() << " " << result.second.imag()<<std::endl;
    int n = 3;
    std::vector< std::vector<double> > A;
    std::vector<double> F{1, 1, 1};
    std::vector<double> X(n, 0);
    A.push_back(std::vector<double>{1, 2, 3});
    A.push_back(std::vector<double>{0, 1, 4});
    A.push_back(std::vector<double>{0, 0, 1});
    CCalculator::Jacobi(n, A, F, X);
    for (int i = 0; i < n; ++i) {
        std::cout << X[i]<<std::endl;
    }
    return 0;
}

