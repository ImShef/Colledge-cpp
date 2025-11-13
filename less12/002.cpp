#include <iostream>

#define SQR(x) ((x) * (x))
#define CUBE(x) (SQR(x) * (x))
#define ABS(x) (((x) < 0)? -(x) : x)

int main() {
    std::cout << SQR(5) << "\n";
    std::cout << CUBE(5) << "\n";
    std::cout << ABS(-5) << "\n";

    return 0;
}