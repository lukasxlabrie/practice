// Calculator.cpp
// Date: 02/28/2024
// Author: Lukas Labrie

#include <iostream>

using namespace std;

int main() // Changed void to int for main function
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer = 'Y'; // Initialized answer to 'Y' and changed double quotes to single quotes
    while (answer == 'Y' || answer == 'y') // Added curly braces and fixed loop condition
    {
        cout << "Enter expression" << endl;
        cin >> op2 >> operation >> op1;
        if (operation == '+') // Removed semicolon after if statement
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Fixed order of operands
        if (operation == '-') // Removed semicolon after if statement
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Fixed order of operands
        if (operation == '*') // Added missing semicolon at the end of the line
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Fixed order of operands and changed '/' to '*'
        if (operation == '/') // Removed semicolon after if statement and fixed '/' to '*'
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // Fixed order of operands and changed '*' to '/'
        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
    return 0; // Added return statement
}