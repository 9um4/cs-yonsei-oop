#include <iostream>
#include <cstring> // For strlen
#include <string>  // For std::string

int main() {
    std::string s1, s2;
    char cstr1[1000], cstr2[1000]; // C-style strings with sufficient size

    // Prompt user for two strings
    std::cout << "Enter the first string (std::string): ";
    std::getline(std::cin, s1);
    std::cout << "Enter the second string (C-style string): ";
    std::cin.getline(cstr2, 1000);

    // Determine the longer string using std::string's length() for s1
    // and strlen() for C-style string cstr2
    std::string longer;
    if (s1.length() > strlen(cstr2)) {
        longer = s1;
        std::cout << "The longer string is: " << longer << std::endl;
    } else if (s1.length() < strlen(cstr2)) {
        longer = cstr2;
        std::cout << "The longer string is: " << longer << std::endl;
    } else {
        std::cout << "Both strings are of equal length." << std::endl;
    }

    return 0;
}
