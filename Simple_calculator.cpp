#include <iostream>
#include <cmath>
using namespace std;
//simple calculator with six operations on given two numbers : +,-,*,/,sqrt,power 
class Calculator {
public:
    // Function to add two numbers
    double add(double x, double y) {
        return x + y;
    }

    // Function to subtract two numbers
    double subtract(double x, double y) {
        return x - y;
    }

    // Function to multiply two numbers
    double multiply(double x, double y) {
        return x * y;
    }

    // Function to divide two numbers
    double divide(double x, double y) {
        if (y == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0; // Returning 0 as an error indicator
        } else {
            return x / y;
        }
    }

    // Function to calculate square root
    double squareRoot(double x) {
        if (x < 0) {
            cout << "Error! Square root of a negative number is not allowed." << endl;
            return 0; // Returning 0 as an error indicator
        } else {
            return sqrt(x);
        }
    }

    // Function to calculate power
    double power(double base, double exponent) {
        return pow(base, exponent);
    }
};

int main() {
    Calculator calc;
    char continueOption = 'y';

    while (continueOption == 'y' || continueOption == 'Y') {
        char operation;
        double num1, num2;

        cout << "Enter operator (+, -, *, /, s = sqrt, p = pow): ";
        cin >> operation;

        switch(operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (operation == '+') {
                    cout << "Result: " << calc.add(num1, num2);
                } else if (operation == '-') {
                    cout << "Result: " << calc.subtract(num1, num2);
                } else if (operation == '*') {
                    cout << "Result: " << calc.multiply(num1, num2);
                } else if (operation == '/') {
                    cout << "Result: " << calc.divide(num1, num2);
                }
                break;
            case 's':
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.squareRoot(num1);
                break;
            case 'p':
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.power(num1, num2);
                break;
            default:
                cout << "Invalid operator";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> continueOption;
    }

    return 0;
}
