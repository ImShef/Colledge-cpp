#include <iostream>

int main() {
    for (int i{1}; i < 10; i++){
        for (int x{1}; x < 10; x++) {
            std::cout << i * x << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}