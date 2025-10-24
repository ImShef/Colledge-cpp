#include <iostream>

int main() {
    std::cout << "Введите символ: ";
    char ch{};
    std::cin >> ch;

    std::cout << "Введите ширину и высоту прямоугольника: ";
    int width{};
    int height{};
    std::cin >> width >> height;

    for (int i{}; i < height; i++) {
        for (int j{}; j < width; j++) {
            if (i == j) {
                std::cout << " + ";
            } else if (i + j == width - 1) {
                std::cout << " - ";
            } else if (i > j && i + j > width - 1) {
                std::cout << " | ";
            } else if (i < j && i + j < width - 1) {
                std::cout << " ~ ";
            } else if (i < j && i + j > width - 1){
                std::cout << " ] ";
            } else if (i > j && i + j < width - 1) {
                std::cout << " # ";
            } else {
                std::cout << " " << ch << " ";
            }
            
        }
        std::cout << "\n";
    }

    return 0;
}