#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Введите номер строки и столбца: ";
    int row{}; 
    int col{};
    std::cin >> row >> col;
    std::cout << "Введите координаты места назначения: ";
    int row2{};
    int col2{};
    std::cin >> row2 >> col2;
    if (row == row2)
    {
        std::cout << "Да, горизонталь\n";
    }
    else if (col == col2)
    {
        std::cout << "Да, ветрикаль\n";
    }
    else if (std::abs(row - row2) == std::abs(col - col2))
    {
        std::cout << "Да, по диагонали\n";
    }
    else 
    {
        std::cout << "Нет\n";
    }
    return 0;
}
