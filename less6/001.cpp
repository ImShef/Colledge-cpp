#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setprecision(17) << 0.1 + 0.2 << '\n';

    if (0.1 + 0.2 == 0.3) {
        std::cout << "Я умею сравнивать вещественные числа!\n";
    }
    else {
        std::cout << "Что то пошло не так!\n";
    }
    return 0;
}