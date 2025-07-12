#include <iostream>
#include"Calculator.h"
using namespace std;

int main() {
    char op;
    int number1, number2, result;

    cout << "Enter Number 1: ";
    cin >> number1;

    cout << "Enter Number 2: ";
    cin >> number2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << number1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << number1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << number1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
                result = number1 / number2;
                cout << "Result: " << number1 << " / " << number2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operator entered!" << endl;
    }

    return 0;
}

