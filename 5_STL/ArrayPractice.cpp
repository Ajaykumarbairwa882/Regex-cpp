#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> arr = {1, 2, 3,3,4,4,5,6}; 

    // sort(arr.begin(), arr.end()); 

    // cout << "Duplicate elements: ";
    // bool found = false;

    // int i = 0;
    // int j=1;
    // while (i < arr.size()) {
    //     if (arr[i] == arr[j]) { 
    //         cout << arr[i] << " ";
    //         found = true;
    //     }
    //     i++;
    //     j++;
    // }

    // if (!found) cout << "None";
// 1
    // vector<int>v(5);
    // for(int i=0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

// 2 
    // vector<int>v={43,5,4,6,7,67,98};
    // int max=v[0];
    // for(int i=1; i<v.size();i++){
    //     if(v[i]>max){
    //         max=v[i];
    //     }
    // }
    // cout<<max;


// 3
    // vector<int>v={43,5,4,6,7,67,98};
    // int min=v[0];
    // for(int i=1; i<v.size();i++){
    //     if(v[i]<min){
    //         min=v[i];
    //     }
    // }
    // cout<<min;

// 4
    // vector<int>v={1,2,3,4,5};
    // int sum=0;
    // for(int i=0; i<v.size();i++){
    //     sum+=v[i];
    // }
    // cout<<sum;

// 5
    // vector<int>v={1,2,3,4,5};
    // int sum=0;
    // int count=0;
    // for(int i=0; i<v.size();i++){
    //     sum+=v[i];
    //     count++;
    // }
    // cout<<"average :"<<sum/count;
// 6
    // vector<int>v={1,2,3,4,-3,-5,-7};
    // int positive=0,negative=0;
    // for(int i=0; i<v.size();i++){
    //     if(v[i]>=0) positive++;
    //     else negative++;
    // }
    // cout<<"positive :"<<positive<<endl;
    // cout<<"negative :"<<negative;

// 7
    // vector<int>v={1,2,3,4,5};

    // for(int i=v.size()-1; i>=0; i--){
    //     cout<<v[i]<<" ";
    // }

// 8
    // vector<int>v={43,5,4,6,7,67,98};
    // int target=67;
    // bool find=false;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==target)
    //     cout<<"index of 67 is : "<<i<<endl;
    //     find=true;
    // }
    // if(true)cout<<"Element include in array";
    // else cout<<"Element not found";


// 9
// vector<int >v={3,9,14,6}
// int smallest=INT_MAX;
// int SecondSmallest=INT_MAX;

// for(auto x:v){
//     if(x<smallest){
//         SecondSmallest=smallest;
//         smallest=x;
//     }
//     else if(x<SecondSmallest && x>smallest){
//         SecondSmallest=x;
//     }
// }
// if(SecondSmallest==INT_MAX) count<<"not found";
// else count<<SecondSmallest<<" ";



// vector<int>v={1,3,4,5,6,6,7,8,8};
// map<int,int>m;
// for(auto x:v){
//     m[x]++;
// }
//  for(auto x:m){
//         cout<<x.first<<"  -> "<<x.second<<endl;
//     }

// Q.4
// 1st approch
    // vector<int>v={1,1,2,3,3};
    // int i=0;
    // int j=1;

    // while(j<v.size()){
    //     if(v[i]==v[j]){
    //         v.erase(v.begin()+ j );
    //     }
    //     i=j;
    //     j++;
    // }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
// 4th approch
    // vector<int>v={1,1,2,3,3,4,5,6,6,5,6,6,5,6};
    // vector<int>ans;
    // for(auto x:v){  
    //     bool flag=false;
    //     for(auto y:ans){
    //         if(x==y){
    //             flag=true;
    //         }
    //     }
    //     if(flag==false){
    //         ans.push_back(x);
    //     }
    // }
    // for(auto x:ans){
    //     cout<<x<<" ";
    // }


// 2nd approch
    // vector<int>v={1,1,2,3,3};
    // set<int>s;
    // for(auto x:v){
    //     s.insert(x);
    // }
    // for(auto x:s){
    //     cout<<x<<" ";
    // }

// 3rd approch
    //  vector<int>v={1,1,2,3,3};
    //  map<int,int>m;
   
    //  for(auto x:v){
    //         m[x]++;
    //  }
    //  for(auto x:m){
    //     cout<<x.first<< " ";
    //  }

// Q.5
    // vector<int>v={1,2,3,4,5};
    // vector<int>ans;
    // for(auto x:v){
    //     ans.push_back(x);
    // }
    // for(auto x:ans){
    //     cout<<x<<" ";
    // }

// Q.6
    // vector<int>v={2,3,4,56,76,65};
    // sort(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

// Q.7
    // vector<int>v={2,3,4,56,76,65};
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

// Q.8
    // vector<int>v={3,6,4,1,9};
    // int temp=v[0];
    // for(int i=1; i<v.size(); i++){
    //     v[i-1]=v[i];
    // }
    // v[v.size()-1] = temp;
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

// Q.9
    // vector<int>v={3,6,4,1,9};//9,3,6,4,1
    // int temp=v[v.size()-1];
    // for(int i=v.size()-2; i>=0; i--){
    //     v[i+1]=v[i];
    // }
    // v[0] = temp;
    // for(auto x:v){
    //     cout<<x<<" ";
    // }


// Q.10
    // vector<int>v={1,2,3,4};
    // vector<int>s={5,6,7,8};
    // vector<int>t;

    // for(auto x:v){
    //     t.push_back(x);
    // }
    //  for(auto x:s){
    //     t.push_back(x);
    // }
    //  for(auto x:t){
    //     cout<<x<< " ";
    // }
// Q.12
    // vector<int>v={1,2,3,4,5,6,7,8,11,13};
    // int even=0;
    // int odd=0;
    // for(auto x:v){
    //     if(x%2==0) even++;
    //     else odd++;
    // }
    //  cout<<"even : "<<even<<endl;
    //  cout<<"odd : "<<odd;

    // vector<int >v={8,6,3,9,4};
    // int largest=0;
    // int largest2=0;
    // for(auto x:v){
    //     if(x>largest)
    //     largest=x;
    // }
    //  for(auto x:v){
    //     if(x>largest2){
    //         if(x!=largest){
    //         largest2=x;
    //         }
    //     }
    // }       
    // cout<<largest*largest2;
    // return 0;      
    
    
}
