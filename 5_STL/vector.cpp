#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;
void reverset(vector<int>&v){
    // vector<int>v={1,2,3,4,5,6,7,8,9};
    // int i=0; 
    // int j=v.size();
    // while(i<j){
    //     swap(v[i],v[j]);
    //     i++;
    //     j--;
    // }
   
    // for(int i=1; i<=v.size();i++ ){
    //         cout<<v[i]<<" ";
    // }
     reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}

void sortt(vector<int>&v){
    // vector<int>v={87,6,5,4,7,8};

    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    //  for(int i=1; i<=v.size();i++ ){
    //         cout<<v[i]<<" ";
    // }

}

int main(){
     // some practice😊
        // vector<int>v={1,2,3,4,5};
      
        // // cout<<v[2];
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // v.insert(v.begin()+2,78);
        // cout<<endl<<v[2];//access the 2nd element
        // cout<<endl<<v.at(2)<<endl;// also 2nd element
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // v.erase(v.begin()+3);//remove the specific element

        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl<<v.empty()<<endl;//check fi vector empty or not 0 or 1 => true or false
        // cout<<v.size();


    // Create a vector of integers and insert 5 elements. Print them using a for loop and range-based for loop.

    // vector<int>v;
    // int n;
    // cout<<"enter n :";
    // for(int i=0;i<5; i++){
    //     cin>>n;
    //     v.push_back(n);
    //     // cin>>v[i];
    // }
    // cout<<"size of vector : "<<v.size()<<endl;
    // // for(auto x:v){
    // //     cout<<x<<" ";
    // // }

    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }

// Find the maximum and minimum elements in a vector without using *max_element or *min_element.

    // vector<int>v={11,22,33,44,55};
    // int max=v[0],min=v[0];

    // for(int i=0; i<v.size();i++){
    //     if(v[i]>max) 
    //     max=v[i];

    //     if(v[i]<min)
    //      min=v[i];
    // }
    // cout<<"max value : "<<max<<endl;
    // cout<<"min value : "<<min<<endl;

// Reverse a vector without using reverse() STL function.

    // vector<int>v={11,22,33,44,55,66};

    // int i=0; 
    // int j=v.size();

    // while(i<j){
    //     swap(v[i],v[j]);
    //     i++;
    //     j--;
    // }

    // for(int i=1; i<=v.size();i++ ){
    //         cout<<v[i]<<" ";
    // }

// Search for a given element in a vector and print its index if found, otherwise print Not Found.

//     vector<int>v={11,22,32,43,45,67};
//     int target= 43;
//     int index=-1;
//     for(int i=0; i<v.size(); i++){
//         if(v[i]==target){
//         index=i;
//         break;
//         }
//     }
//    if(index!=-1) cout<<index;
//     else cout<<"Not Found.";

// Remove all even numbers from a vector of integers.
    // vector<int>v={2,3,4,5,6,7,8,9};

    // for(int i=0; i<v.size(); i++){
    //     if(v[i]%2==0){
    //         v.erase(v.begin()+i);
    //     }
    // }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    // cout<<endl<<v.size();




// set 
    //wap to insert 10 element in vector and enter the half of vector in the set 
     
    // vector<int>v(10);
    // set<int>s;
    // for(int i=1; i<v.size(); i++){
    //     cin>>v[i];
    // }
    // int g=v.size()/2;
    // for(int i=g; i<=v.size();i++){
    //     s.insert(i);
    // }

    // cout<<"set : ";
    //   for(auto x:s){
    //     cout<<x<<" ";
    // }

vector<int>v={1,2,3,4,5,6,7,8,9};
int num;
cout<<"enter a num :";
cin>>num;
if(num>0){
    reverset(v);
}
else{
   sortt(v);  
}

}