#include <iostream>
#include <string>

// 1. Member Struct
struct Member {
    std::string name;
    std::string email;

    // Constructor for initializing Member
    Member(const std::string& n, const std::string& e) : name(n), email(e) {}
};

// 2. Bookstore Class
class Bookstore {
private:
    Member member; // Stores a single member for simplicity

public:
    // Public constructor that takes a name and email and creates a Member object inside the Bookstore
    Bookstore(const std::string& name, const std::string& email) : member(name, email) {}

    // Public function that prints the name and email of instance of Bookstore class
    void printMember() {
        std::cout << "Member Name: " << member.name << "\nMember Email: " << member.email << std::endl;
    }
};

int main() {
    // Creating an instance of Bookstore with member details
    Bookstore myBookstore("John Doe", "john.doe@example.com");

    // Printing the member details
    myBookstore.printMember();

    return 0;
}
