#include <iostream>
#include <climits>
#include <ctime>
#include <cstdlib>

const int size{100000};

void printArr(int arr[size], int len = size) {
    for(int i{}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n"; 
}

void insertSort (int arr[], int len = size) {
    // int t{ arr[0]};
    // arr[0] = std::numeric_limits<int>::min();

    for (int i{1}; i < len; i++) {
        for (int j { i }; arr[j] < arr[j - 1]; j--) {
            int temp = arr[j -1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
        }
    }

    // int i{ 1 };
    // for (; t > arr[i]; i++) {
    //     arr[i - 1] = arr[i];
    // }
    // arr[i - 1] = t;
}

void insertSortG (int arr[], int len = size) {
    int t{ arr[0]};
    arr[0] = std::numeric_limits<int>::min();

    for (int i{1}; i < len; i++) {
        for (int j { i }; arr[j] < arr[j - 1]; j--) {
            int temp = arr[j -1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
        }
    }

    int i{ 1 };
    for (; t > arr[i]; i++) {
        arr[i - 1] = arr[i];
    }
    arr[i - 1] = t;
}

void fillRand(int arr[size], int len = size) {
    std::srand(std::time(nullptr));
    for(int i = 0; i < size; ++i) arr[i] = rand();
}

int main() {
    int arr[size]{};
    fillRand(arr,size);
    // printArr(arr, size);
    int t1_start = std::time(nullptr);
    insertSort(arr, size);
    int t1_end = std::time(nullptr) ;
    // printArr(arr, size);
    std::cout << t1_end - t1_start << "\n";
    
    
    int arr1[size]{};
    fillRand(arr1,size);
    
    // printArr(arr1, size);
    int t2_start = std::time(nullptr);
    insertSortG(arr1, size);
    int t2_end = std::time(nullptr);
    // printArr(arr1, size);
    std::cout << t2_end - t2_start << "\n";

    return 0;
}