#include <iostream>
using namespace std;
int main() {
    int R,X,Y,X1,Y1;
    cout << "Введите сторону квадрата"<< endl; cin >> R;
    if(R <= 0)
    {
        while(R <=  0)
        {
            cout << "Неверная сторона. Введите другую:" << endl; cin >> R;
        }
    }
    cout << "Введите X левой нижней вершины:" << endl; cin >> X;
    cout << "Введите Y левой нижней вершины:" << endl; cin >> Y;
    cout << "Введите X точки:" << endl; cin >> X1;
    cout << "Введите Y точки:" << endl; cin >> Y1;
    if(X1 <= X + R)
    {
        if(X1 >= X )
        {
            if(Y1 <= Y + R)
            {
                if(Y1 >= Y) cout <<"Точка находится в квадрате"<< endl;
                else cout <<"Точка не находится в квадрате"<< endl;
            }
            else cout <<"Точка не находится в квадрате"<< endl;
        }
        else cout <<"Точка не находится в квадрате"<< endl;
    }
    else cout <<"Точка не находится в квадрате"<< endl;
    return 0;
}
