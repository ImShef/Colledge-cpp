#include <iostream>
const int size{5};

void printArr(int arr[size], int len = size) {
        for(int i{}; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n"; 
}

void sortArr(int arr[size], int len = size) {
    for (int i{}; i < len; i++) {
        for (int j{i}; j < len; j++) {
            int indMin{};
            if (arr[i] > arr[j]) {
                indMin = arr[j];
                arr[j] = arr[i];
                arr[i] = indMin;
            }
            printArr(arr, size);
       }
    }
}

int main() {
    int arr[size]{5,4,3,2,1};
    
    printArr(arr, size);
    sortArr(arr, size);
    printArr(arr, size);

    return 0;
}