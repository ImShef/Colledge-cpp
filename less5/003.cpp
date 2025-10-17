#include <iostream>

int main(){
    int num{ 1 };

    while (num <= 100)
    {
        std::cout << num << " ";
        num++;
    }

    std::cout << "\n";

    for (int num{ 1 }; num <= 100; num++)
    {
        std::cout << num << ' ';
    }
    std::cout << "\n";

    return 0;
}