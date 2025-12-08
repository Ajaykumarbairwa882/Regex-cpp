#include<bits/stdc++.h>
using namespace std;
int main(){
    //Q.1
    // vector<vector<int>>v={{1,2,3},{4,5,6}};
    // for(int i=0;i<=v.size();i++){
    //     for(int j=0;j<=v.size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

   //Q.2 => WAP to find the index of 0 in the given 2D array

    // vector<vector<int>>v={{1,-1,3},{6,4,0},{9,8,-11}};
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v[0].size();j++){
    //         if(v[i][j]==0)cout<<i<<","<<j;
    //     }
    //     cout<<endl;
    // }


    // Q.3 => calculate count of zero

    //  vector<vector<int>>v={{1,0,3},{6,4,0},{9,8,-11}};
    //     int count=0;
    //     for(int i=0;i<v.size();i++){
    //         for(int j=0;j<v[0].size();j++){
    //             if(v[i][j]==0)count++;
    //         }
    //         cout<<endl;
    //     }
    //     cout<<count;


    // Q.4= > replace negative valuve into 0 

    vector<vector<int>>v={{-10,3,2},{6,5,-30},{6,-40,9}};

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]<0){
                v[i][j]=0;}
            }
            // cout<<endl;
        }

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
       
}