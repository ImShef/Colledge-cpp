#include <iostream>

int main() {
    const int lenArr{31};
    double border{};
    double aver{};
    double countLower{};
    double temp[lenArr]{-5,-1,-2,-3,3,0,1,2,3,4,-5,-6,-10,-12,-13,-12,-5,-1,-2,-3,3,0,1,2,3,4,-5,-6,-10,-12,-13};

    std::cout << "Введите температуру: ";
    std::cin >> border;

    for (int i{}; i < lenArr; ++i) {
        aver += temp[i];
        if (temp[i] < border) {
            countLower++;
        }
    }
    aver /= lenArr;

    std::cout << "Среднее: " << aver;


    return 0;
}