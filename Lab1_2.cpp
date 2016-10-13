#include <iostream>

int main() {
    int R,X,Y,X1,Y1;
    std::cout << "Введите сторону квадрата:"<< std::endl; std::cin >> R;
    if(R <= 0)
    {
        while(R <= 0)
        {
            std::cout << "Неверная сторона. Введите другую:"<< std::endl; std::cin >> R;
        }
    }
    std::cout << "Введите X левой нижней вершины:"<< std::endl; std::cin >> X;
    std::cout << "Введите Y левой нижней вершины:"<< std::endl; std::cin >> Y;
    std::cout << "Введите X точки:"<< std::endl; std::cin >> X1;
    std::cout << "Введите Y точки:"<< std::endl; std::cin >> Y1;
    if(X1 <= X + R)
    {
        if(X1 >= X)
        {
            if(Y1 <= Y + R)
            {
                if(Y1 >= Y) std::cout <<"Точка находится в квадрате"<< std::endl; 
            }
            else std::cout <<"Точка не находится в квадрате"<< std::endl;
        }
        else std::cout <<"Точка не находится в квадрате"<< std::endl;
    }
    else std::cout <<"Точка не находится в квадрате"<< std::endl;
    return 0;
}
