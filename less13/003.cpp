#include <iostream>
const int size{5};

int findArr(int arr[size], int len, int find) {
    int findIndex{-1};
    for (int i{}; i < len; i++) {
        if (find == arr[i]) {
            findIndex = i;
            std::cout << "Ваше число под индексом: ";
            return findIndex;
        }
    }
    if (findIndex == -1) {
        std::cout << "Если вывелось -1, значит не найдено число в массиве;(\n";
    }
    return findIndex;
}

int main() {

    int arr[size]{1,2,3,4,5};
    std::cout << "Введите число, которое хотите найти по индексу: ";
    int find{};
    std::cin >> find;
    std::cout << findArr(arr, size, find) << "\n";
    return 0;
}