
#include <iostream>
#include <iomanip>
#include <cmath>

void printMenu() {
    std::cout << "=====================================\n";
    std::cout << "|           SCIENTIFIC CALC         |\n";
    std::cout << "=====================================\n";
    std::cout << "| Options:                          |\n";
    std::cout << "| 1. Addition (+)                   |\n";
    std::cout << "| 2. Subtraction (-)                |\n";
    std::cout << "| 3. Multiplication (*)             |\n";
    std::cout << "| 4. Division (/)                   |\n";
    std::cout << "| 5. Sine (sin)                     |\n";
    std::cout << "| 6. Cosine (cos)                   |\n";
    std::cout << "| 7. Tangent (tan)                  |\n";
    std::cout << "| 8. Logarithm (log)                |\n";
    std::cout << "| 9. Square Root (sqrt)             |\n";
    std::cout << "| 0. Exit                           |\n";
    std::cout << "=====================================\n";
    std::cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        printMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 + num2;
            std::cout << "Result: " << result << "\n";
            break;
        case 2:
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 - num2;
            std::cout << "Result: " << result << "\n";
            break;
        case 3:
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 * num2;
            std::cout << "Result: " << result << "\n";
            break;
        case 4:
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << "\n";
            }
            else {
                std::cout << "Error: Division by zero\n";
            }
            break;
        case 5:
            std::cout << "Enter an angle in radians: ";
            std::cin >> num1;
            result = sin(num1);
            std::cout << "Result: " << result << "\n";
            break;
        case 6:
            std::cout << "Enter an angle in radians: ";
            std::cin >> num1;
            result = cos(num1);
            std::cout << "Result: " << result << "\n";
            break;
        case 7:
            std::cout << "Enter an angle in radians: ";
            std::cin >> num1;
            result = tan(num1);
            std::cout << "Result: " << result << "\n";
            break;
        case 8:
            std::cout << "Enter a number: ";
            std::cin >> num1;
            if (num1 > 0) {
                result = log(num1);
                std::cout << "Result: " << result << "\n";
            }
            else {
                std::cout << "Error: Logarithm of non-positive number\n";
            }
            break;
        case 9:
            std::cout << "Enter a number: ";
            std::cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
                std::cout << "Result: " << result << "\n";
            }
            else {
                std::cout << "Error: Square root of negative number\n";
            }
            break;
        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
        std::cout << "Press any key to continue...\n";
        std::cin.ignore();
        std::cin.get();
        std::system("clear"); // Use "cls" on Windows
    } while (choice != 0);

    return 0;
}
