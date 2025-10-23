#include <iostream>

int main(){
    long long int res{ 1 };
    int num{};

    std::cout << "Введите число: ";
    std::cin >> num;

    for(int i{num}; i <= 20; i++) {
        res *= i;
    }

    std::cout << "Вывод: " << res << '\n';
    return 0;
}