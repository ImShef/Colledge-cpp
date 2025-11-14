#include <iostream>
const int size{5};

void sortArr(int arr[size], int len = size) {
    for (int i{}; i < len; i++) {
        int indMin{ i };
        for (int j{i}; j < len; j++) {
            if (arr[i] > arr[j]) {
                indMin = j;
            }
        }
        int temp{arr[i]};
        arr[i] = arr[indMin];
        arr[indMin] = temp;
    }
}

int main() {
    int arr[size]{5,4,3,2,1};
    std::cout << arr;
    sortArr(arr, size);
    std::cout << arr;
    
    return 0;
}