#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

// Function to return precedence of operators
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Function to check if operator is right-associative
bool isRightAssociative(char c) {
    return c == '^';
}
// --------------------------------------------------------------------------
string infixToPostfix(string &s) {                   // to POSTFIX
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        // If operand, add to result
        if ((c >= 'a' && c <= 'z') || 
            (c >= 'A' && c <= 'Z') || 
            (c >= '0' && c <= '9'))
            res += c;

        // If '(', push to stack
        else if (c == '(')
            st.push('(');

        // If ')', pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }

        // If operator
        else {
            while (!st.empty() && st.top() != '(' &&
                   (prec(st.top()) > prec(c) ||
                   (prec(st.top()) == prec(c) && !isRightAssociative(c)))) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}
// --------------------------------------------------------------------
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string infixToPrefix(string s) {                        // to PREFIX
    stack<char> st;
    string result = "";

    // scan from right to left
    for (int i = s.length() - 1; i >= 0; i--) {
        char c = s[i];

        if (isalnum(c)) {
            result += c;
        }
        else if (c == ')') {
            st.push(c);
        }
        else if (c == '(') {
            while (!st.empty() && st.top() != ')') {
                result += st.top();
                st.pop();
            }
            
            // pop ')'
            if (!st.empty()) st.pop(); 
        }
        else if (isOperator(c)){
            while (!st.empty() && isOperator(st.top()) &&
                   (prec(st.top()) > prec(c) ||
                   (prec(st.top()) == prec(c) && isRightAssociative(c)))) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // pop remaining operators
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    // reverse at the end to get correct prefix
    reverse(result.begin(), result.end());
    return result;
}

// ===========================================================
int main() {
    string exp = "a*(b+c)/d";
    cout << infixToPostfix(exp) << endl;
    cout << infixToPrefix(exp);
    return 0;
}
