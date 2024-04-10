#include <iostream>
#include <string>

int main() {
    std::string word = "козел";
    std::string input;
    std::cin >> input;

    std::cout << "\"" << input << "\" - " << word << std::endl;

    return 0;
}