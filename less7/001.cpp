#include <iostream>

int main() {
    for (int i{}; i < 10; i++) {
        for (int j{}; j < 10; j++){
            if (i >= j && i + j >= 10 - 1) {
                std::cout << "|===|";
            }
            else {
                std::cout << "     ";
            }
        }
        std::cout << "\n";
    }
    for (int j{}; j < 10; j++){
        for (int i{}; i < 10; i++) {
            if (i == 4 && j == 4 || i == 4 && j == 5){
                std::cout << "     ";
            } else {
              std::cout << "|###|";  
            }
            
        }
        std::cout << "\n";
    }
    return 0;
}