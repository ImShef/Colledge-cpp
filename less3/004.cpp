#include <iostream>
#include <cmath>

int main()
{
    int x0{};
    int y0{};
    int r1{};
    int r2{};
    int x1{};
    int y1{};

    std::cout << "Введите координаты центра кольца: ";
    std::cin >> x0 >> y0;
    std::cout << "Введите радиусы кольца: ";
    std::cin >> r1 >> r2;
    std::cout << "Введите координаты точки: ";
    std::cin >> x1 >> y1;

    double L{std::sqrt(std::pow(x0 - x1, 2) + std::pow(y0 - y1, 2))};

    if (L < r2 && L > r1)
    {
        std::cout << "Точка лежит на кольце.";
    }
    else
    {
        std::cout << "Точка не лежит на кольце.";
    };
    return 0;
}