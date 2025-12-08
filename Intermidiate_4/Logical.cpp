#include<bits/stdc++.h>
using namespace std;
int main(){// Q.7
    // vector<int>v={1,2,3,4,5,6};
    // int i=0,j=v.size()-1;
    // while(i<j){
    //     swap(v[i],v[j]);
    //     i++;
    //     j--;
    // }

    // for(auto x:v){
    //     cout<<x<<" ";
    // }


// Q.7
   // find unique number in array.
    
//    vector<int>v={1,1,2,3,3,4,4};
//    set<int>s;
//    for(auto x:v){
//     s.insert(x);
//    }
//    for(auto x:s){
//     cout<<x<<" ";
//    }


//    Q.8
// 1st approch
    // vector<int> v={2,4,6,9,3};
    // int sum = 6;
    //  count = 0;
    // for(int i=0;i<v.size();i++) {
    //     for(int j=i+1; j<v.size();j++) {
    //         if(v[i]+v[j]==sum) {
    //             count++;
    //         }
    //     }
    // }
    // cout<<"pairs"<<count<<endl;

// 2nd approch
    // vector<int> v = {1,2,3,4,5,6};
    // int sum = 6;
    // int count = 0;

    // sort(v.begin(), v.end()); 
    // int i = 0;
    // int j = v.size() - 1;

    // while(i < j) {
    //     if(v[i] + v[j] > sum) {
    //         j--;
    //     }
    //     else if(v[i] + v[j] < sum) {
    //         i++;
    //     }
    //     else {
    //         count++;
    //         i++;
    //         j--;
    //     }
    // }

    // cout << "pairs = " << count << endl;

    // return 0;



// Q.9 intersection
    // vector<int> v1 = {1,2,3,4,6,7};
    // vector<int> v2 = {2,3,8,6,7,9};
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    // vector<int>ans;
    // int i = 0, j = 0;
    // while(i < v1.size() && j < v2.size()){
    //     if(v1[i] == v2[j]) {
    //         ans.push_back(v1[i]);
    //         i++; 
    //         j++;
    //     }
    //     else if(v1[i] < v2[j]){
    //          i++;
    //         }
    //     else j++;
    // }
    // for(auto x : ans){
    //     cout << x << " ";
    // }


// Q.10 union
    // vector<int> v1 = {1,2,2,3,4};
    // vector<int> v2 = {2,3,4,5,6};
    // set<int> s;
    // for(auto x:v1){
    //     s.insert(x);
    // }
    //  for(auto x:v2){
    //     s.insert(x);
    // }
    // for(auto x : s) cout << x << " ";

}
