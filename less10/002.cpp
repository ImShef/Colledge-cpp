#include <iostream>

void swap(int& x, int& y) {
    int c{ x };
    c = x;
    x = y;
    y = c;
    return;
}

int sum(int a, int b){
    int c{ a + b };
    return c;
}


int main() {
    int a{ 5 };
    int b{ 10 };

    std::cout << sum(a, b) << "\n";
    std::cout << sum(a, b) << "\n";

    return 0;
}