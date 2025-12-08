#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abbab";
    int size=s.size();
    int i=0,j=size-1;
    while(i<j){
       if(s[i]==s[j]){
        i++;
        j--;
       }
       else{
            cout<<"not palindrome "<<endl;
            return 0;
           
       }
    }
    cout<<"palindrome";
}