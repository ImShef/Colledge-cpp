#include <iostream>

#define pi 3.14

int y{};

inline void counter()
{
    static int z{ 1 };
    z++;
    std::cout << z << "\n";
}

int main() {

    double x{pi};
    counter();
    counter();
    counter();
    std::cout << x << "\n";
    return 0;
}