#include <iostream>

void Helloworld() {
    std::cout << "Hello world" << "\n";
}

void outInt(int a) {
    std::cout << a << "\n";
}

int fact(int a) {
    int res{1};
    for (int i{2}; i <= a; i++) {
        res *= i;
    }
    return res;
}

void outStr(char a, int b) {
    for (int i{1}; i <= b; i++) {
        std::cout << a;
    }
    std::cout << "\n";
}

void printBreak(int x, int y, char z) {
    for (int j{}; j <= y; j++) {
        outStr(z, x);
    }
}

int main() {

    Helloworld();
    outInt(1);

    std::cout << fact(25) << "\n";
    outStr('y', 5);
    printBreak(30, 5, '#');
    return 0;
}