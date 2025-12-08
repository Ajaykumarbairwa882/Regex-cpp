#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1; j<=3; j++){
            if(j==1)cout<<2<<" ";
            else if(j==2) cout<<0<<" ";
            else cout<<1;
        }
        cout<<endl;
    }
    return 0;
}