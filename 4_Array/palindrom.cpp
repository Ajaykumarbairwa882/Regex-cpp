#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 1};
    int i = 0;
    int j = v.size() - 1;
    bool isPalindrome = true;

    while(i < j) {
        if(v[i] != v[j]) {  
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
