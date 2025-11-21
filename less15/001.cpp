#include <iostream>
const int size{6};

void printArr(int arr[size], int len = size) {
    for(int i{}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n"; 
}

void shakerSort(int arr[size],  int len = size) {
    long j{ };
    int k {len - 1};
    int  lb{ 1 };
    int rb{ len - 1};
    int x{};

    do {
        for (j = rb ; j > 0 ; j--) {
            if (arr[j - 1] > arr[j]) {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
                k = j;
            }
        }
        lb = k - 1;
        for (j = 1 ; j <= rb ; j++) {
            if (arr[j - 1] > arr[j]) {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
                k = j;
            }
        }
        rb = k - 1;
    // printArr(arr, size);

    } while (lb < rb);
    
}

int main() {
    int arr[size]{2,3,4,5,6,1};
    int arr1[size]{6,1,2,3,4,5};

    printArr(arr1, size);
    shakerSort(arr1, size);
    printArr(arr1, size);
    return 0;
}
//Александр Сергеевич Пушкин 
//"Код на C++ у лукоморья дуб зеленый"
//1812 г.

