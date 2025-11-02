#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int min{};
    int max{};
    int i{};
    const int arrLen{100};
    int arr[arrLen];

    std::cout << "Введите диапазон значений: ";
    std::cin >> min >> max;

    if (min > max) {
        i = min;
        min = max;
        max = i;
    }

    std::cout << "Вывод чисел в заданном диапазоне: \n";
    for (int j{}; j < arrLen; j++) {
        arr[j] = std::rand() % (max - min + 1) + min;
    }

    for (int j{}; j < arrLen; j++) {
        std::cout << arr[j] << "\t";
    }
    std::cout << "\n";

    return 0;

}