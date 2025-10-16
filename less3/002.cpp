#include <iostream>

int main()
{
    int a{};
    int b{};

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    // if (b != 0)
    // {
    //     std::cout << a << " / " << b << " = " << a / b << "\n";
    // }
    // else 
    // {
    //     std::cout << "Нельзя делить на 0!";
    // }   

    // (b != 0) ? std::cout << a << " / " << b << " = " << a / b << "\n"
    //          : std::cout << "Нельзя делить на 0!";

    int max{ (a > b) ? a : b};
    int min{ (a > b) ? b : a};

    std::cout << "Максимум: " << max << "\n";
    std::cout << "Минимум: " << min << "\n";

    return 0;
}