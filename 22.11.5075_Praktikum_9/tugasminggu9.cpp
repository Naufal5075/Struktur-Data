#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(char operation, int operand1, int operand2) {
    switch(operation) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0;
    }
}

int evaluatePostfixExpression(const string& expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');  // Mengubah karakter menjadi bilangan
        } else if (isOperator(c)) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            int result = performOperation(c, operand1, operand2);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string postfixExpression;

    cout << "Masukkan ekspresi postfix: ";
    getline(cin, postfixExpression);

    int result = evaluatePostfixExpression(postfixExpression);
    cout << "Hasil evaluasi: " << result << endl;

    return 0;
}
