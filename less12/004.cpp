#include <iostream>


int zeroCount(int arr[], int n) {
    int zeros{};
    
    for (int i{}; i < n; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }
    return zeros;
}

int zeroCount(double arr[], int n) {
    int zeros{};
    
    for (int i{}; i < n; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }
    return zeros;
}

int main() {
    const int size{ 5 };
    int arr[size]{2, 87, 0, 95, 0};
    double arr2[size]{2.2, 87.5, 0.1, 95.2, 0.1};

    std::cout << zeroCount(arr, size) << "\n";
    std::cout << zeroCount(arr2, size) << "\n";

    return 0;
}