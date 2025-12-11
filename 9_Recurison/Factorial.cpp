#include<bits/stdc++.h>
using namespace std;
    int fact(int n){
        if(n==1)return 1; // base condition or terminative condition
        return n* fact(n-1); // recursive case 
    }

int main(){
    cout<<fact(3);
}  