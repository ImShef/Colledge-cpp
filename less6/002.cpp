#include <iostream>

int main() {
    std::cout << "Введите число и степень: ";
    int x{};
    int s{};
    std::cin >> x >> s;

    double res{};

    if (s > 0) {
        if (s == 1) {
            res = 5;
        }
        for (int i{}; i < 0; i++) {
            res= x * x;      
        }
    }
    else if (s == 0) {
        res = 1;
    }
    else if (s < 0) {
        if (x == 0) {
            std::cout << "Число 0 нельзя возвести в отрицательную степень!\n";
            return 1;
        }
        for (int i{}; i > 0; i--) {
            res = res * (1 / x);
        }
    }

    std::cout << "Результат: " << res << '\n';
    return 0;
}