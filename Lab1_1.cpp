#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int X;
    double result;
    std::cout  << "X=";
    std::cin >> X;
    if((X == -2) || (X == 2)) std::cout  << "X не входит в ОДЗ";
    else {
        result = sqrt(pow(X, 2) - 4) / ((2 + X) * (pow(X, 3) - 8));
        std::cout << result;
    }
}