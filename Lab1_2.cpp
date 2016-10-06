#include <iostream>

int main() {
    int R,X,Y,X1,Y1;
    std::cout << "Введите радус окружности:"<< std::endl; std::cin >> R;
    if(R <= 0)
    {
        while(R <= 0)
        {
            std::cout << "Неверный радиус. Введите другой радиус:"<< std::endl; std::cin >> R;//Проверка правильности введенного радиуса
        }
    }
    std::cout << "Введите X центра:"<< std::endl; std::cin >> X;
    std::cout << "Введите Y центра:"<< std::endl; std::cin >> Y;
    std::cout << "Введите X точки:"<< std::endl; std::cin >> X1;
    std::cout << "Введите Y точки:0"<< std::endl; std::cin >> Y1; //Ввод значений
    if(X1 <= X + R)
    {
        if(X1 >= X - R)
        {
            if(Y1 <= Y + R)
            {
                if(Y1 >= Y - R) std::cout <<"Точка находится в окружности"<< std::endl; //Проверка и вывод результата
            }
            else std::cout <<"Точка не находится в окружности"<< std::endl;
        }
        else std::cout <<"Точка не находится в окружности"<< std::endl;
    }
    else std::cout <<"Точка не находится в окружности"<< std::endl;
    return 0;
}
