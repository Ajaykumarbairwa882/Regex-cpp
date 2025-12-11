#include<bits/stdc++.h>
using namespace std;
char firstNonRepeating(string&s){
    unordered_map<char,int>m;
    for(auto x:s){
        m[x]++;
    }
    for(auto x:s){
        if(m[x]==1){
            return x;
           
        }
    }
    return -1;
}
int main(){
    string s="swiss";
   char result = firstNonRepeating(s);

        if (result == -1)
            cout << s << " ->  -1\n";
        else
            cout << s << "  ->  " << result << "\n";
    
    
}