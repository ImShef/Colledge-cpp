#include <iostream>

int main()
{
    // std::cout << (5 > 3) << "\n";
    // std::cout << (5 < 3) << "\n";
    // std::cout << (5 == 3) << "\n";
    // std::cout << (5 != 3) << "\n";

    // int x( 5 );
    // std::cout << (10 > x && x > 1) << "\n";
    // x = 0; 
    // std::cout << (10 > x && x > 1) << "\n";
    // std::cout << !true << "\n";

    // int x( 0 );
    // int y( 5 );
    // if (y = x)
    // {
    //     std::cout << "да!" << "\n";
    // }
    // else
    // {
    //     std::cout << "нет.";
    // };
    // return 0;

    int str( 0 ); 
    int col( 0 );
    std::cout << "Введите номер строки и столбца: ";
    std::cin >> str >> col;
    std::cout << "\nВаш ферзь стоит на таких координатах: (" << str << " " << col << ")\n"; 
    return 0;
}

