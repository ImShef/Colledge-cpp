#include <iostream>

int main() 
{
    int x{ 5000 };
    int sec{};
    int min{};
    int hours{};


    min = x % 3600 / 60;
    sec = x % 3600 % 60;
    hours = x / 3600;
    
    
    std::cout << hours << ":" << min << ":" << sec << "\n";
    
    return 0;


}