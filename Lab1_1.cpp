#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int X;
    double result;
    cout  << "X=";
    cin >> X;
    if((X<=2)&&(X>=-2)) cout  << "X не входит в ОДЗ";
    else {
        result = (sqrt(pow(X, 2) - 4)) / ((2 + X) * (pow(X, 3) - 8));
        cout << result;
    }
    return 0;
}
