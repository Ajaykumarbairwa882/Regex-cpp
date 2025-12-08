#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="[{}]";
    stack<char>st;
   for(auto x:s){
    if(x=='('||x=='['||x=='{'){
    st.push(x);
   }
   else if(x=='}' && st.top()=='{'){
        st.pop();
   }
 }
   if(st.empty()){
    cout<< "true";
   }
   else cout<< "false";
}