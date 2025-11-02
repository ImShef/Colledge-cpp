#include <iostream>
#include <limits>
int main() {

    const int rowCount{ 8 };
    const int colCount{ 8 };
    int arr[rowCount][colCount]{
        {5, 4, 3, 2, 1, 3, 4, 5},
        {6, 6, 6, 6, 6, 6, 6, 6},
        {0, 0, 5, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 4, 0, 0, 0, 0},
        {0, 0, 0, 0, 2, 0, 0, 0},
        {7, 7, 7, 7, 7, 7, 7, 7},
        {8, 9, 10, 11, 12, 10, 9, 8}
    };

    for (int i{0}; i < rowCount; i++) {
        int max{ std::numeric_limits<int>::min() };
        for (int j{0}; j < colCount; j++) {
            // std::cout << &arr[i][j] << ' ';
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        std::cout << "Максимум для " << i + 1 << "-ой строки: " << max << "\n";
    }

    return 0;
}