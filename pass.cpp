#include <iostream>
#include <string>

int main() {
    std::string username;
    std::string password;

    // Set username and password
    std::cout << "Set your username: ";
    std::cin >> username;

    std::cout << "Set your password: ";
    std::cin >> password;

    std::cout << "Username and password set successfully!" << std::endl;

    // Sign in
    std::string signInUsername;
    std::string signInPassword;

    std::cout << "Sign in" << std::endl;
    std::cout << "Username: ";
    std::cin >> signInUsername;

    std::cout << "Password: ";
    std::cin >> signInPassword;

    // Check if the entered credentials match the set credentials
    if (signInUsername == username && signInPassword == password) {
        std::cout << "Sign in successful! Welcome, " << username << "!" << std::endl;
    } else {
        std::cout << "Invalid username or password. Sign in failed." << std::endl;
    }

    return 0;
}