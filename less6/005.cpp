#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
   std::cout << "Текущее время (кол-во секунд с начала эпохи Unix): "
             << std::time({}) << '\n';

    std::srand(std::time({}));

    int num{};


    std::cout << "Диапазон пвесдослучайных чисен: [0,"
              << RAND_MAX << "]\n";
    num = rand() % 6 + 1;
    std::cout << "Броски кубика: " << num << " ";
    num = rand() % 6 + 1;
    std::cout << num << ' ';
    num = rand() % 6 + 1;
    std::cout << num << ' ';
    return 0;
}