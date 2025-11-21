#include <iostream>
const int size{6};

void printArr(int arr[size], int len = size) {
    for(int i{}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n"; 
}

void sortBubbleArr(int arr[size], int len = size, bool inc = true) {
    for (int j{}; j < len; j++) {
        bool isSort { true };
        // printArr(arr, size);
        for (int i{}; i < len - 1; i++) {
            if ((inc) ? (arr[i] > arr[i+1]) : (arr[i] < arr[i+1])) { 
                int temp{ arr[i] };
                arr[i] = arr[i+1];
                arr[i+1] = temp;        
                isSort = false;
                // printArr(arr, size);
            }
            
        }
        if (isSort) {
            break;
        }
    }
}

int main() {
    int arr[size]{2,3,4,5,6,1};
    int arr1[size]{6,1,2,3,4,5};

    printArr(arr, size);
    sortBubbleArr(arr, size);
    printArr(arr, size);
    printArr(arr1, size);
    sortBubbleArr(arr1, size);
    printArr(arr1, size);


    return 0;
}