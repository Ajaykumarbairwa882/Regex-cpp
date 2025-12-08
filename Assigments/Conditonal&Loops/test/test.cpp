#include<iostream>
using namespace std;
int main(){


    for(int i=1;i<=2;i++){
        if(i==1){
            cout<<"     "<<1;
        }
        else if(i==2){
            for(int j=2;j<=4;j++){
                cout<<"  "<<j;
            }
        }
        cout<<endl;
        }

    for(int i=2;i>=1;i--){
        if(i==1){
            cout<<"     "<<"*";
        }
        else if(i==2){
            for(int j=2;j<=4;j++){
                cout<<"  "<<"*";
            }
        }
        cout<<endl;
        }
    }
    