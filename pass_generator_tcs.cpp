#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <cctype>

std::string toWords(int digit) {
    switch (digit) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return "";
    }
}

bool isValidName(const std::string& name) {
    for (char c : name) {
        if (!std::islower(c)) {
            return false;
        }
    }
    return true;
}

std::string getPassword(double number, const std::string& name) {
    // Check for invalid input
    if (!isValidName(name)) {
        return "Invalid";
    }

    // Extract the coefficient and exponent directly
    int coefficientDigit = static_cast<int>(std::fabs(number)) % 9 + 1;
    int exponentDigit = static_cast<int>(std::log10(std::fabs(number)));
    if (exponentDigit == 0) {
        exponentDigit = 1; // Special case for numbers like 1.0 or 0.1
    } else {
        exponentDigit += 1; // Add 1 for the digits before the decimal point
    }

    // Create S1 by concatenating the first three letters of each digit
    std::string S1 = toWords(coefficientDigit / 100) + toWords((coefficientDigit / 10) % 10) + toWords(coefficientDigit % 10);
    S1 += "@";
    
    // Create S2 if the exponent digit is odd
    std::string S2 = "";
    if (exponentDigit % 2 == 1) {
        for (std::string::size_type i = 0; i < name.length(); i += 2) {
            S2 += name[i];
        }
    }

    return S1 + S2;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        double number;
        std::string name;

        // Get input for each test case
        std::cout << "Enter number for test case " << (i + 1) << ": ";
        std::cin >> number;
        std::cout << "Enter name for test case " << (i + 1) << ": ";
        std::cin >> name;

        // Check for invalid input
        if (std::cin.fail()) {
            std::cout << "Invalid input\n";
            return 1;
        }

        // Get the password and display the result
        std::string password = getPassword(number, name);
        std::cout << "Password for test case " << (i + 1) << ": " << password << "\n";
    }

    return 0;
}
