#include <iostream>

int sum (int a, int b) {
    return a + b;
}

double sum (double a, double b) {
    return a + b;   
}

double sum (int a, double b) {
    return a + b;
}

double sum (double a, int b) {
    return a + b;
}
int main() {
    std::cout << sum(15,15) << "\n";
    std::cout << sum(15.3,15.2) << "\n";
    std::cout << sum(15.4,15) << "\n";
    std::cout << sum(15,15.5) << "\n";

    return 0;
}