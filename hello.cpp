#include <iostream>
#include <string>

int main() {
  std::cout << "Fire Duck" << std::endl;

  int value = 42;
  std::string title = "Some string";
  std::cout << title << std::endl;

  std::cin >> title;
  std::cout << title << std::endl;

  std::getline(std::cin, title);
  std::cout << title << std::endl;
}
