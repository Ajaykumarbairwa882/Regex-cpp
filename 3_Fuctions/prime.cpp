#include <iostream>
using namespace std;

int prime(int n){
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0)isprime=false;
    }
    if(isprime){
        cout<<"this number is prime ";
    }
    else
    {
        cout<<"not prime";
    }
}


int main(){
    int n;
    cout<<"enter a num :";
    cin>>n;
    prime(n);
}