#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    v.push_back(10);
    cout<<v.size()<<endl;;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    ///what is max_size()= it returns the maximum number of elements that the vector can hold.
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v[3]<<endl;

    
    return 0;
}