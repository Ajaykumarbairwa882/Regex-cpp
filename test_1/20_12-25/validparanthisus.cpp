#include <bits/stdc++.h>
using namespace std;

bool isValid(string message) {
    stack<char> st;

    for (char ch : message) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        
        else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        
        }
    }
    return st.empty(); 
}
int main(){
   string message = "(]";
   cout<<isValid(message);
}