// Calculator.cpp
// Date: 02/28/2024
// Author: Lukas Labrie

#include <iostream>

using namespace std;

int main() // Changed void to int, return should be int
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer = 'Y'; // changed double quotes to single quotes to ensure it's a char
    while (answer == 'Y' || answer == 'y') // needed curly braces otherwise loop is busted
    {
        cout << "Enter expression" << endl;
        cin >> op2 >> operation >> op1;
        if (operation == '+') // do not need semicolon
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // operands incorrectly ordered
        if (operation == '-') // do not need semicolon
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // operands incorrectly ordered
        if (operation == '*') // do not need semicolon
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // operands incorrectly ordered, changed / to *
        if (operation == '/') // do not need semicolon
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // operands incorrectly ordered, changed / to *
        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
    return 0; // will not clsoe wihtout return
    
}