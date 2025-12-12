#include<bits/stdc++.h>
using namespace std;
int vowelscount(string &s,int i,int c){
    if(i==s.size()) return c;
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        c++;
    }
   return vowelscount(s,i+1,c);
}
int main(){
    string s="ajay";
    cout<<vowelscount(s,0,0);
}