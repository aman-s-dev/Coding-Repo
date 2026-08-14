#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

int floorDiv(int a, int b) {
    if (a * b < 0 && a % b != 0) 
        return (a / b) - 1;
    return a / b;
}
// -----------------------------------------------------------        //  NOT RUNNING AT ALL
int evaluatePrefix(vector<string>& arr) {
    stack<int> st;
    int n = arr.size();

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        string token = arr[i];

        // If it's an operand (number), push it onto the stack
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            st.push(stoi(token));
        }

        // Otherwise, it must be an operator
        else {
            int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();

            if (token == "+") {
                st.push(val1 + val2);
            } else if (token == "-") {
                st.push(val1 - val2);
            } else if (token == "*") {
                st.push(val1 * val2);
            } else if (token == "/") {
                st.push(floorDiv(val1, val2));
            } else if (token == "^") {
                st.push(pow(val1, val2));
            }
        }
    }
    return st.top();
}
// -------------------------------------------------------

int evaluatePostfix(vector<string>& arr) {
    stack<int> st;

    for (string token : arr) {
        
        // If it's an operand (number), push it onto the stack
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            st.push(stoi(token));
        } 
        
        // Otherwise, it must be an operator
        else {
            int val1 = st.top(); st.pop(); 
            int val2 = st.top(); st.pop(); 

            if (token == "+") st.push(val2 + val1);
            else if (token == "-") st.push(val2 - val1);
            else if (token == "*") st.push(val2 * val1);
            else if (token == "/") st.push(floorDiv(val2, val1));
            else if (token == "^") st.push((int)pow(val2, val1));
        }
    }
    return st.top();
}
// =============================================================
int main() {
    vector<string> pre = {"2", "3", "1", "*", "+", "9", "-"};
    cout<<"Prefix expression : " ;
    cout << evaluatePrefix(pre) << endl;
    
    // vector<string> post = {"+", "*", "/", "+", "100", "200", "2", "5", "7"};
    // cout << "" << evaluatePostfix(post) << endl;
    return 0;
}