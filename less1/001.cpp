#include <iostream>

int main()
{
    std::cout << "Введите число: ";
    double digit{};
    std::cin >> digit;
    int res{};
    res = digit / 100;
    std::cout << res << "сотен в этом числе!\n";

    return 0;

}