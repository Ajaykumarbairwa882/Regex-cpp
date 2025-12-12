#include<bits/stdc++.h>
using namespace std;
int apearcount(vector<int>v, int i,int count,int t){
    if(i>v.size()) return count;
    if(v[i]==1) count++;
   return apearcount(v,i+1,count,t);
}
int main(){
    vector<int>v={1,1,2,3,1 };
    cout<<apearcount(v,0,0,1);
}