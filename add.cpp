#include <iostream>

int add(const int a, const int b) {
    return a + b;
}

int main() {
    int a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    
    std::cout << "Sum: " << add(a, b) << std::endl;
    return 0;
}




