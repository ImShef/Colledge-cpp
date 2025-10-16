#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Введите  операнды и операции: ";
    double num1{};
    double num2{};
    char oper{};
    std::cin >> num1 >> oper >> num2;
    double res{};

    if (oper == '+')
    {
        res = num1 + num2;
    }
    else if (oper == '-')
    {
        res = num1 - num2;
    }
    else if (oper == '/' || oper == ':')
    {
        if (num2 == 0)
        {
            std::cout << "На 0 делить нельзя!";
            goto exit;
        }
        else {
            res = num1 / num2;
        };
    }
    else if (oper == '*')
    {
        res = num1 * num2;
    }
    else if (oper == '^')
    {
        res = std::pow(num1, num2);
    }
    else 
    {
        std::cout << "Не поддерживаемая операция, начните снова!";
    };

    std::cout << "Ваш результат: " << res << "\n";

    exit:
        return 0;

}