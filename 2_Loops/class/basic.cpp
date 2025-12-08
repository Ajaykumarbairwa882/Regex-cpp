#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
// dimond 
    // for(int i=1 ;i<n ;i++){
    //     for(int j=n; j>=1; j--){
    //         if(j==i) cout<<"*";
    //         else cout<<" ";
    //     }
    //     for(int j=2; j<n; j++){
    //         if(j==i ) cout<<"*";
    //         else cout<<" ";
    //     }

    //     cout<<endl;
    // }
    //  for(int i=n-2;i>=1;i--){
    //     for(int j=n; j>=1; j--){
    //         if(j==i) cout<<"*";
    //         else cout<<" ";
    //     }
    //     for(int j=2; j<n; j++){
    //         if(j==i ) cout<<"*";
    //         else cout<<" ";
    //     }

    //     cout<<endl;
    // }

    for(int i=n; i>=2 ; i--){
        for(int j=1; j<=n; j++){
            if(j==i || i==n)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
     for(int k=1;k<=n;k++){
            cout<<"*";
        }



}