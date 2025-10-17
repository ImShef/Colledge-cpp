#include <iostream>
#include <random>

int main()
{
    // Современный генератор случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    
    int secretNumber = dist(gen);
    
    std::cout << "Укажи сколько попыток хочешь: ";
    int pop{};
    std::cin >> pop;
    
    for(int i{}; i < pop; i++)
    {
        std::cout << "Угадайте число (от 1 до 100): ";
        int tmp{};
        std::cin >> tmp;
        
        if (tmp > secretNumber) {
            std::cout << "Число меньше " << tmp << "\n";
        }
        else if (tmp < secretNumber) {
            std::cout << "Число больше " << tmp << "\n";
        }
        else {
            std::cout << "Вы угадали!\n";
            return 0;
        }
    }
    
    std::cout << "Попытки закончились! Загаданное число было: " << secretNumber << "\n";
    return 0;
}