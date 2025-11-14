#include <iostream>

template <typename T1, typename T2, typename T3>
int max (T1 a, T2 b, T3 c) {
    int indexMax{ 1 };
    if (b > c && b > a) indexMax = 2;
    if (c > a && c > b) indexMax = 3;
    return indexMax;
}

template <typename T1, typename T2, typename T3>
void print(T1 a, T2 b, T3 c) {
    std::cout << a << ' ' << b << ' ' << c << "\n";
}

int main() {

    std::cout << max<int>(2,5,4) << "\n";
    std::cout << max<double>(7.2, 1.2, 5.4) << "\n";
    std::cout << max    (3.2L, 1.2F, 5) << "\n";
    print(2, 5, -56);
    print(2.7, 5.5, -56.32);
    print(2, 5.5, 10L);    
    

    return 0;
}