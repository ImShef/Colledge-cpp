#include <iostream>
const int size{5};

void printArr(int arr[size], int len = size) {
    for(int i{}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n"; 
}

void sortArr(int arr[size], int len = size, bool inc = true) {
    for (int i{}; i < len; i++) {
        // printArr(arr, size);
        int indMin{ i };
        for (int j{i}; j < len; j++) {
            if (inc) {
                if (arr[j] < arr[indMin]) indMin = j;
            } else {
                if (arr[j] > arr[indMin]) indMin = j;
            }
        }
        int temp{ arr[i] };
        arr[i] = arr[indMin];
        arr[indMin] = temp;
    }
}

int main() {
    int arr[size]{5,4,3,2,1};
    // int arr1[size]{1,2,3,4,5};

    printArr(arr, size);
    sortArr(arr, size, true);
    // printArr(arr, size);
    printArr(arr, size);
    sortArr(arr, size, false);
    printArr(arr, size);


    return 0;
}