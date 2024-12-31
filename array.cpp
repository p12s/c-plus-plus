#include <iostream>
#include <string>

int main() {
    const std::string strings[] = {
        "C++ is a general-purpose programming language with a bias towards systems programming that",
        "  - is a better C",
        "  - supports data abstraction",
        "  - supports object-oriented programming",
        "  - supports generic programming."
    };

    const size_t size = sizeof(strings) / sizeof(strings[0]);

    for (size_t i = 0; i < size; ++i) {
        std::cout << strings[i] << std::endl;
    }
}