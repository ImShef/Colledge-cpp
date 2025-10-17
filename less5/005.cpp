#include <iostream>

int main()
{
    std::cout << "Введите 2 числа: ";
    int right{ };
    int left{ };
    int res{ };
    std::cin >> left >> right;
    if (left > right)
    {
        int tmp{ };
        tmp = right;
        right = left;
        left = tmp;
    };
    for (int i{left}; i <= right; i++)
    {
        res += i;
        std::cout << "res + i = " << res << "\n";
    }
    std::cout << "Результат: " << res << "\n";
    return 0;

}