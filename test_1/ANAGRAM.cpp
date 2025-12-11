#include<bits/stdc++.h>
using namespace std;
bool anagram(string&s1,string&s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
}

int main(){
    string s1="silent",s2="listen";

    cout<<anagram(s1,s2);
    return 0;
}