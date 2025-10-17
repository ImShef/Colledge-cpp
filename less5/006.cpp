#include <iostream>

int main()
{
    std::cout << "Введите символ: ";
    char c('*');
    std::cin >> c;
    std::cout << "Введите сколько: ";
    int i{};
    std::cin >> i;
    int line{};
    while (line != 1 && line != 2) { 
        std::cout << "Какую линюю хотите?\n" << "1.Вертикальная\n" << "2.Горизонтальная\n";
        std::cout << "Пиши: ";
        std::cin >> line;
        if (line != 1 && line != 2) { 
            std::cout << "Вы ввели неправильно число!\n";
        }
    }
    for (int x{}; x < i; x++)
    {
        switch (line)
        {
        case 1:
            std::cout << c << "\n";
            break;
        case 2:
            std::cout << c << " ";
            break;
        default:
            break;
        }
    }
    std::cout << "\n";
    return 0;
}