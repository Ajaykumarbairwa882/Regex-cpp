#include<bits/stdc++.h>
using namespace std;
int main(){
    // Q.1
//         vector<int>v(5);
//         for(int i=0; i<v.size(); i++){
//             cin>>v[i];
//         }
//         for(auto x:v){
//             cout<<x<<" ";
//         }

// Q.2
        // vector<int>v={23,34,54,65,67,654,687};
        // int largest=v[0];
        // int secondlarg=v[0];
        // int thirdLarg=v[0];
        // for(auto x:v){
        //     if(x>largest){
        //         thirdLarg=secondlarg;
        //         secondlarg=largest;
        //         largest=x;
        //     }
        //     else if (x!=largest && x>secondlarg){
        //         thirdLarg=secondlarg;
        //         secondlarg=x;
        //     }
        //     else if(x!=largest&&x!=secondlarg&&x>thirdLarg){
        //         thirdLarg=x;
        //     }
        // }

        // cout<<largest<<endl;
        // cout<<secondlarg<<endl;
        // cout<<thirdLarg<<endl;

// Q.3 Smallest number in array

        // vector<int>v={123,32,43,54,67,89,76,54};
        // int smallest=v[0];
        // int secondSmall=v[0];
        // for(auto x:v){           //smallest✅
        //     if(x<smallest){
        //         smallest=x;
        //     }
        // }
        // cout<<smallest<<endl;

        // secondSmallest✅
        // for(auto x:v){
        //     if(x<smallest){
        //         secondSmall=smallest;
        //         smallest=x;
        //     }
        //     else if(x > smallest && x < secondSmall){
        //         secondSmall=x;
        //     }
        // }
        // cout<<secondSmall<<endl;


// Q.4 sum of all element

        // vector<int>v={2,3,4,5,6,};
        // int sum=0;
        // for(auto x:v){
        //         sum+=x;
        // }
        // cout<<sum;

// Q.5 avarage of all element
        // vector<int>v={12,8};
        // int sum=0;
        // int count=0;
        // for(auto x:v){
        //         sum+=x;
        //         count++;
        // }
        // cout<<sum/count;

// Q.6 count positive and negative element in array
        // vector<int>v={1,2,4,-5,-6,-8};
        // int positive=0;
        // int negative=0;
        // for(auto x:v){
        //         if(x>0) positive++;
        //         else negative++;
        // }
        // cout<<"positive : "<<positive<<endl;
        // cout<<"negative : "<<negative; 

// Q.7 reverse order array
        
        // vector<int>v={1,2,3,4,5,6,7,8};
        // for(int i=v.size()-1; i>=0; i--){
        //         cout<<v[i]<<" ";
        // }

// Q.8  Search for an element in an array (linear search).
        // vector<int>v={23,43,54,66,78,99};
        // int target=91;
        // bool find =true;
        // for (auto x:v){
        //         if(x==target){
        //                 cout<<"element found in array.";
        //                 find=false;
        //                 break;
        //         }
        // }
        // if(find) cout<<"not found ";

// Medium Level😊

// Q.3=> Count frequency of each element in an array.
        // vector<int>v={1,2,3,2,3,3,3,3,4,45,3,21};
        // map<int,int>m;
        // for(auto x:v){
        //     m[x]++;
        // }
        // for(auto x:m){
        // cout<<x.first<<" -> "<<x.second<<endl;
        // }
        

//     vector<int> v = {1,2,3,4,5,6,7,8};
//     vector<int> s;
//     int size = v.size();
//     int half = size / 2;  

    
//     for (int i = half; i < size; i++) {
//         s.push_back(v[i]);
//     }
    
//     for (int i = 0; i < half; i++) {
//         s.push_back(v[i]);
//     }

//     for (auto x : s) cout << x << " ";
//     return 0;


//   vector<int> v = {1,2,3,4,5,6,7,8};
//     vector<int> s;
//     int size = v.size();
//     int half = size / 2;  

    
//     for (int i = half; i < size; i++) {
//         s.push_back(v[i]);
//     }
    
//     for (int i = 0; i < half; i++) {
//         s.push_back(v[i]);
//     }

//     for (auto x : s) cout << x << " ";
//     return 0;
}




