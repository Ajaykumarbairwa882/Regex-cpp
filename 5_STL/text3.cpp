#include <bits/stdc++.h>
using namespace std;

// int Largest(vector<int> v) {
//     int largest = INT_MIN,
//      int second = INT_MIN,
//      int  third = INT_MIN;

//     for (auto x : v) {
//         if (x > largest) {
//             third = second;
//             second = largest;
//             largest = x;
//         }
//         else if (x != largest && x > second) {
//             third = second;
//             second = x;
//         }
//         else if (x != largest && x != second && x > third) {
//             third = x;
//         }
//     }
//     return third;
// }

int main() {
    // vector<int> v = {12, 5, 20, 8, 15};
    // int thirdLargest = Largest(v);
    // cout << "Third largest element is: " << thirdLargest << endl;
    // return 0;


// Q.2
// vector<int>v={7,7,7,7};
// int even=0;
// int odd=0;
// for(auto x:v){
//     if(x%2==0) even++;
//     else odd++;
// }
// if(even>odd) cout<<"even ";
// else if(odd>even) cout<<"odd";
// else cout<<"equal";

// Q.3



    // vector<int>v={4,5,9,4,9,2,7};
    // set<int>s;
    // for(auto x:v){
    //     s.insert(x);
    // }
    // for(auto x:s){
    //     cout<<x<<" ";
    // }

// map
    // vector<int>v={4,5,9,4,9,2,2,7};
    // map<int,int>m;
    // for(auto x:v){
    //     m[x]++;
    // }
    // for(auto x:m){
    //     cout<<x.first<<" ";
    // }














    // vector<int>v={4,5,9,4,2,2,7};
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











  vector<int>v={4,5,9,4,9,2,2,7};
  for(int i=0; i<v.size(); i++){
    int j=1;
    while(i<v.size()){
        if(v[i]==v[j]){
            v.erase(v.begin());
            j++;
        }
    }
  }
  for(auto x:v){
    cout<<x<<" ";
  }


}


