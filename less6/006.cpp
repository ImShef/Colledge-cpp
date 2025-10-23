#include <iostream> 

int main() {
    for (int i{ 0 }; i < 20; i++) {
        if ( i % 2 == 0) {
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}
