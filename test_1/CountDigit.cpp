#include<bits/stdc++.h>
using namespace std;
int digit(int n, int c){
    if(n == 0) return c;
    return digit(n/10, c+1);
}
int main(){
    int n=1234;
    cout<<digit(n,0); 
}