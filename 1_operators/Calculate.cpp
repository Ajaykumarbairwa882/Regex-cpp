#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"num1 :";
    cin>>a;
    int b;
    cout<<"num2 :";
    cin>>b;
    if(a==b){
        cout<<"sum :"<<a+b;
    }
    else if(a>b){
        cout<< "sub :"<< a-b;
    }
    else if(a<b){
        cout<< "mult :"<< a*b;
    }
    else{
        cout<<"not found";
    }

    return 0;
}