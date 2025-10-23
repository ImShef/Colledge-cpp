#include <iostream>

int main(){
    int x{};
    int res{};
    int com{ 1 };
    double min{INFINITY};
    double max{-INFINITY};
    do {
        std::cout << "Введите число: ";
        std::cin >> x;
        res += x;
        if (min > x) {
            min = x;
        }
        if (max < x) {
            max = x;
        }
        std::cout << "Продолжить ввод?\n1.Да\n2.Нет\nПиши: ";
        std::cin >> com;
        if (com == 2) {
            std::cout << "Выходим.\n";
            break;
        } 
    } while (com == 1);
    std::cout << "Сумма всех чисел: " << res << "\n";
    std::cout << "Минимальное число: " << min << "\n";
    std::cout << "Максимальное число: " << max << "\n"; 
    return 0;
}