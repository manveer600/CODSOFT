#include <iostream>

int main() {
    double num1, num2;
    char operation;
    double result;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "The result of " << num1 << " + " << num2 << " is " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The result of " << num1 << " - " << num2 << " is " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The result of " << num1 << " * " << num2 << " is " << result << "\n";
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "The result of " << num1 << " / " << num2 << " is " << result << "\n";
            } else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator.\n";
            break;
    }

    return 0;
}
