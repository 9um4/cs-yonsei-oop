#include <iostream>
#include <cstring> // For strcat and strcpy
#include <string>  // For std::string

int main() {
    std::string firstName, lastName;

    // Ask for first and last name using std::string
    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);

    // Concatenate std::strings
    std::string fullName = firstName + " " + lastName;
    std::cout << "Your full name is: " << fullName << std::endl;

    // C-style strings
    char cFirstName[1000], cLastName[1000], cFullName[2000];

    // Ask for first and last name again for C-style string example
    std::cout << "Enter your first name again: ";
    std::cin.getline(cFirstName, 1000);
    std::cout << "Enter your last name again: ";
    std::cin.getline(cLastName, 1000);

    // Concatenate C-style strings
    strcpy(cFullName, cFirstName); // Copy the first name into the full name buffer
    strcat(cFullName, " ");        // Append a space
    strcat(cFullName, cLastName);  // Append the last name

    std::cout << "Your full name again is: " << cFullName << std::endl;

    return 0;
}
