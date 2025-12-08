#include<bits/stdc++.h>
using namespace std;
int main(){
    // max

//    vector<int >v={1,2,3,4,5,56,7};
//    int n=v.size();
//    int max=v[0];
//    for(int i=0; i<n; i++){
//     if(v[i]>max){
//         max=v[i];
//     }
//    }
//    cout<<max;



// min

//  vector<int >v={1,2,3,4,5,56,7};
//    int n=v.size();
//    int min=v[0];
//    for(int i=0; i<n; i++){
//     if(v[i]<min){
//         min=v[i];
//     }
//    }
//    cout<<min;
//    return 0;



// second max

//  vector<int >v={1,2,3,4,5,56,7};
//    int n=v.size();
//    int max=INT_MIN;
//    int smax=INT_MIN;
//    for(int i=0; i<n; i++){
//     if(v[i]>max){
//         smax=max;
//         max=v[i];
//     }
//     else if(v[i]>smax && v[i]!=max){
//         smax=v[i];
//     }
//    }
//    cout<<smax;


//second min

//  vector<int >v={1,2,3,4,5,56,7};
//    int n=v.size();
//    int min=INT_MAX;
//    int smin=INT_MAX;
//    for(int i=0; i<n; i++){
//     if(v[i]<min){
//         smin=min;
//         min=v[i];
//     }
//     else if(v[i]<smin && v[i]!=min){
//         smin=v[i];
//     }
//    }
//    cout<<smin;




//cal sum of all element in array

// vector<int>v={1,2,3,4,5,6,7,8};
// int n=v.size();
// int sum=0;
// for(int i=0; i<n; i++){
//     sum+=v[i];
// }
// cout<<sum;



//Avarage of array

// vector<int>v={1,2,3,4};
// int n=v.size();
// float sum=0;
// for(int i=0; i<n; i++){
//     sum+=v[i];
// }
// cout<<sum/n;


//count pos and neg

// vector<int>v={1,2,-3,4,-4,65,-68};
// int n=v.size();
// int pos=0 , neg=0;
// for(int i=0; i<n; i++){
//     v[i]<0?neg++:pos++;
// }
// cout<<"pos >> "<<pos<<endl<<"neg >> "<<neg;
// }


// search element in array

// vector<int>v={1,2,3,4,5,6};
// int n=v.size();
// int t=4;
// for(int i=0; i<n; i++){
//     if(v[i]==t){
//         cout<<i;
//     }
// }


// count frequency of each element;

// vector<int>v={1,2,2,3,4,3,4,5,6};
// map<int,int>mp;
// for(auto x:v){
//     mp[x]++;
// }
// for(auto x:mp){
//     cout<<x.first<<"=="<<x.second<<endl;
// }


//Remove duplicate

//  vector<int>v={1,2,2,3,4,3,4,5,6};
//  set<int>s;
//  for(auto x:v){
//     s.insert(x);
//     }
//     for(auto x:s){
//         cout<<x<<" ";
//     }


// Sort an array in ascending order (any method).

    // vector<int>v={2,1,3,4,43,23,12,121};
    // // int n=v.size();
    // sort(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

    // for(int i=0;i<n;i++){
    //     if(v[i]<v[i+1])
    // }


// 6 Sort an array in ascending order (any method).

    // vector<int>v={3,2,3,4,3,4,56,6};
    // int n=v.size();
    // for(int i=0; i<n-1;i++){
    //     for(int j=0; j<n-1-i;j++){
    //         if(v[i]>v[i+1]){
    //             swap(v[i],v[i+1]);
    //         }
    //     }
    // }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }


  // 7 Sort an array in descending order (any method).
  
//    vector<int>v={3,2,3,4,3,4,56,6};
//     int n=v.size()-1 ;
//     for(int i=0; i<n;i++){
//         for(int j=0; j<n;j++){
//             if(v[j]<v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
//     for(auto x:v){
//         cout<<x<<" ";
//     }



// Rotate array elements by 1 position to the left.

vector<int>v={1,2,3,4,5};
int k=1;
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());
reverse(v.begin(),v.end());
for(auto x:v){
    cout<<x<< " ";
}

}