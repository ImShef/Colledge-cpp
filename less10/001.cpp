#include <iostream>

int sum(int a, int b){
    int c{ a + b };
    return c;
}

int main(){
    int res{ sum(5, 6) };
    std::cout << res << "\n";

    std::cout << sum(5, 6) << "\n";

    int x{ 5 };
    int y{ 6 };
    std::cout << sum(x + 3, y) << "\n";

    {
        int a{ x + 3 };
        int b{ y };

        int ret{ a + b};
        
    }
    return 0;
}