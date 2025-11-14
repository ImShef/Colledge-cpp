#include <iostream>

const int size{5};

template <typename T>
T maxArr(T a[size], int len) {
    T max{};
    for (int i{0}; i < len; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

template <typename T>
T maxArr(T a[size][size], int len, int wih) {
    T max{ a[0][0]};
    for (int i{0}; i < len; i++) {
        for (int j{0}; j < wih; j++){
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
    }  
    return max;
}

template <typename T>
T maxArr(T a[size][size][size], int len, int wih, int te) {
    T max{ a[0][0][0]};
    for (int i{0}; i < len; i++) {
        for (int j{0}; j < wih; j++){
            for (int p{}; p < te; p++) {
                if (max < a[i][j][p]) {
                    max = a[i][j][p];
                }
            }
           
        }
    }  
    return max;
}


int main() {
    int arr[size]{1,2,3,4,5};
    int arr2[size][size]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,2,3,4,5},
        {6,7,8,9,10},
        {6,7,8,90,10},
    };
    int arr3 [size][size][size]{
        {
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6}
        },
        {
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6}
        },
        {
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6}
        },
        {
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,40,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6}
        },
        {
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6},
            {2,1,4,5,6}
        },
    };
    
    std::cout << "Максимум: " << maxArr(arr,size) << "\n";
    std::cout << "Максимум: " << maxArr(arr2,size, size) << "\n";
    std::cout << "Максимум: " << maxArr(arr3,size, size, size) << "\n";
    
    double arr4[size]{1,2,3.4,4,5.2};
    std::cout << "Максимум: " << maxArr(arr4,size) << "\n";
    

 
    return 0;
}