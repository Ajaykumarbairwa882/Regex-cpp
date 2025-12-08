#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;
void reverset(vector<int>&v){
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}

void sortt(vector<int>&v){
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    int num;
    cout<<"enter a num :";
    cin>>num;
    if(num>0){
        reverset(v);
    }
    else{
    sortt(v);  
    }

}