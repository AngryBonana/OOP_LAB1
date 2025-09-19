#include <iostream>
#include "include/countFractures.h"


int main() {
    unsigned int n, m;

    std::cout << "Введите размеры шоколадки (два числа через пробел): ";
    std::cin >> n >> m;
    std::cout << "Минимальное число надломов: " << countFractures(n, m) << std::endl;

    return 0;
}