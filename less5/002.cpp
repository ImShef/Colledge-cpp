#include <iostream>

int main()
{
    // std::cout << "Введите температуру: ";
    double t{};
    // std::cin >> t;

    // while(t < 60)
    // {
        // std::cout << "Введите температуру: ";
        // std::cin >> t; 
    // }
    // std::cout << "У вас пожар XD\n";

    
    do
    {
        std::cout << "Введите температуру: ";
        std::cin >> t; 
    } while (t < 60);
    
    std::cout << "У вас пожар XD\n";


    return 0;
}