#include <iostream>

int add(const int a, const int b) {
    return a + b;
}

int main() {
    int a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    std::cout << "Сумма: " << add(a, b) << std::endl;
    return 0;
}




