#include <iostream>

int main() {
    // int arr[][5]{
    //     {1, 32, 0},
    //     {3, 4, 5}
    // };
    const int rowCount{ 8 };
    const int colCount{ 8 };
    int arr[rowCount][colCount]{
        {5, 4, 3, 2, 1, 3, 4, 5},
        {6, 6, 6, 6, 6, 6, 6, 6},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {7, 7, 7, 7, 7, 7, 7, 7},
        {8, 9, 10, 11, 12, 10, 9, 8}
    };

    for (int i{0}; i < rowCount; i++) {
        for (int j{0}; j < colCount; j++) {
            std::cout << &arr[i][j] << ' ';
        }
        std::cout << "\n";
    }

    return 0;
}