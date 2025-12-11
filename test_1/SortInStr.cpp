#include<bits/stdc++.h>
using namespace std;
string sort(string&s){
    set<char>st;
    for(auto x:s){
        st.insert(x);
    }
    string ans="";
    for(auto x:st){
        ans.push_back(x);
    }
    return ans;
}
int main(){
    string s="aabbccd";
    cout<<sort(s);
    return 0;
}