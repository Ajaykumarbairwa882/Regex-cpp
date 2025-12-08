#include<iostream>
#include<map>
using namespace std;
int main(){
    string s="aaabb";
    int k=3;
    string ans;
    map<char,int>m;
    for(auto x:s){
        m[x]++;
    }
    for(auto x:m){
        if(x.second==k){
            ans=x.second;
        }
    }
   cout<<ans;
}