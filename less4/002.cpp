#include <iostream>

int main()
{
    enum week_days{ponedelnik = 1, vtornik, sreda, chetverg,
        pyatnisa, subbote, voskresenie};
    int num{};
    std::cout << "Введите число: ";
    std::cin >> num;

    switch (num)
    {
    case ponedelnik:
        std::cout << "Понедельник\n";
        break;
    case vtornik:
        std::cout << "Вторник\n";
        break;
    case sreda:
        std::cout << "Среда\n";
        break;
    case chetverg:
        std::cout << "Четверг\n";
        break;
    case pyatnisa
        std::cout << "Пятница\n";
        break;
    case subbote:
        std::cout << "Суббота\n";
        break;
    case voskresenie:
        std::cout << "Воскресенье\n";
        break;
    
    default:
        std::cout << "Число вне диапазона (1-7)\n";
        break;
    }

    return 0;

}