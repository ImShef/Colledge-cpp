#include <iostream>

int main() {
    int arr[10]{};
    for (int i{0}; i <= std::size(arr); i++) {
        arr[i] = rand();
        std::cout << arr[i] << '\n';
    }
    return 0;
}