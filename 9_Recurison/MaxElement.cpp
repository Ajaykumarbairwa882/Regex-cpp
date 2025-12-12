#include<bits/stdc++.h>
using namespace std;
int minelement(vector<int>v, int i,int min/){
    if(i>v.size()) return min;
    if(v[i]<min) min=v[i];
    return minelement(v,i+1,min);
}
int main(){
    vector<int>v={1,2,32,3,4,5,500,6,7,66};
    cout<<minelement(v,0,v[0]);
}