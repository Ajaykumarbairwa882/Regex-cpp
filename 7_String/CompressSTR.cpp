#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& s) {
    int n = s.size();
    int i = 0, index = 0;

    while(i < n) {
        char curr_char = s[i];
        int count = 0;

        // Count occurrences
        while(i < n && s[i] == curr_char) {
            count++;
            i++;
        }

        s[index++] = curr_char;

        // Add digits of count (if more than 1)
        if(count > 1) {
            string cnt = to_string(count);
            for(char ch : cnt) {
                s[index++] = ch;
            }
        }
    }
    return index;
}

int main() {
    vector<char> chara = {'a','a','b','b','c','c','c'};
    cout << compress(chara) << endl;

    // Printing compressed array for verification
    for(int i = 0; i < chara.size(); i++){
        cout << chara[i] << " ";
    }
}
