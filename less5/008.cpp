#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time({}));

    const int secret{ std::rand() % 100 + 1};
    
    std::cout << "Укажи сколько попыток хочешь: ";
    int pop{};
    std::cin >> pop;
    
    for(int i{}; i < pop; i++)
    {
        std::cout << "Угадайте число (от 1 до 100): ";
        int tmp{};
        std::cin >> tmp;
        
        if (tmp > secret) {
            std::cout << "Число меньше " << tmp << "\n";
        }
        else if (tmp < secret) {
            std::cout << "Число больше " << tmp << "\n";
        }
        else {
            std::cout << "Вы угадали!\n";
            return 0;
        }
    }
    
    std::cout << "Попытки закончились! Загаданное число было: " << secret << "\n";
    return 0;
}