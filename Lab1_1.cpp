#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int X;
    double result;
    std::cout  << "X=";
    std::cin >> X;//Ввод значений
    if((X == -2) || (X == 2)) std::cout  << "X не входит в ОДЗ";//Проверка ОДЗ
    else {
        result = sqrt(pow(X, 2) - 4) / ((2 + X) * (pow(X, 3) - 8));//Решение
        std::cout << result;
    }
}
