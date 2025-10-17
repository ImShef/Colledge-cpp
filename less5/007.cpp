#include <iostream>

int main()
{
    const int num{ 100 };
    int i{ 1 };
    for (; i < num; i++)
    {
        std::cout << "Введите число: ";
        int n{};
        std::cin >> n;

        if (n == 0)
        {
            break;
        }
    }
    std::cout << "Цикл отработал " << i << " раз.\n";
    return 0;
}