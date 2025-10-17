#include <iostream>

int main()
{
    for (int choise{ }; choise < INFINITY;)
    {
        std::cout << "\nВыберите цифру из меню: \n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Выход из программы\n";
        std::cout << "Пиши: ";
        std::cin >> choise;
        int A;
        int B;
        switch (choise)
        {
            case 1:
                std::cout << "Введите 2 числа: ";
                std::cin >> A >> B;
                std::cout << A << " + " << B << " = " << A+B << "\n";
                break;
            case 2:
                std::cout << "Введите 2 числа: ";
                std::cin >> A >> B;
                std::cout << A << " - " << B << " = " << A-B << "\n";
                break;
            case 3:
                std::cout << "Спасибо за проверку программы)\n";
                return 0;
            default:
                std::cout << "Вы ввели неправильно число, попробуйте еще раз\n";
                break;
        }
    }
}