#include <iostream>

int main() {
    int arr[10]{};
    int x{};
    const int sizeArr{ std::size(arr)};
    for (int i{0}; i < sizeArr; i++) {
        std::cout << "Напишите число: ";
        std::cin >> x;
        arr[i] = x;
    }
    std::cout << "\n";
    int aver{};
    for (int i{0}; i < sizeArr; i++) {
        if (arr[i] < 0) {
            std::cout << arr[i] << " ";
            aver += arr[i];
        }
    }
    std::cout << "\n";

    std::cout << "Сумма " << aver;
}
