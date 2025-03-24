#include <iostream>
#include <stack>
#include <cctype>
using namespace std;


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Function to convert infix expression to postfix
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix;
    
    for (char ch : infix) {
        // If character is operand, add to output
        if (isalnum(ch)) {
            postfix += ch;
        }
        // If left parenthesis, push to stack
        else if (ch == '(') {
            st.push(ch);
        }
        // If right parenthesis, pop and add to output until left parenthesis
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // Pop '(' from stack
        }
        // If operator, pop operators with higher or equal precedence
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    
    // Pop remaining operators from stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    
    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    
    return 0;
}




