#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++) cout<<"* ";
    //     cout<<"\n";
    // }

//     for(int i=n;i>=1;i--){
// for(int j=1;j<=i;j++) cout<<"* ";
// cout<<"\n";


// for(int i=1;i<=n;i++){
//     for(int s=1;s<=n-i;s++) cout<<" ";
//     for(int j=1;j<=2*i-1;j++) cout<<"*";
//     cout<<"\n";
// }

// for(int i=1;i<=n;i++){
// for(int s=1;s<=n-i;s++) cout<<" ";
// for(int j=1;j<=2*i-1;j++) cout<<"*";
// cout<<"\n";
// }
// for(int i=n-1;i>=1;i--){
// for(int s=1;s<=n-i;s++) cout<<" ";
// for(int j=1;j<=2*i-1;j++) cout<<"*";
// cout<<"\n";
// }

// int r=4,c=5;
// for(int i=1;i<=r;i++){
// for(int j=1;j<=c;j++){
// if(i==1||i==r||j==1||j==c) cout<<"*";
// else cout<<" ";
// }
// cout<<"\n";
// }


// for(int i=1;i<=n;i++){
// for(int j=1;j<=i;j++) cout<<j<<" ";
// cout<<"\n";
// }


// for(int i=1;i<=n;i++){
// for(int j=1;j<=i;j++) cout<<i<<" ";
// cout<<"\n";
// }


// int num=1;
// for(int i=1;i<=n;i++){
// for(int j=1;j<=i;j++) cout<<num++<<" ";
// cout<<"\n";
// }

// 0–1 Pattern
// for(int i=1;i<=n;i++){
// for(int j=1;j<=i;j++) cout<<(i+j)%2<<" ";
// cout<<"\n";
// }


// Reverse Number Triangle
// for(int i=n;i>=1;i--){
// for(int j=1;j<=i;j++) cout<<j<<" ";
// cout<<"\n";
// }

///--------vector----------///
// vector<int>a={1,2,3,4,5};
// int n=a.size();
// bool sorted=true;
// for(int i=1;i<n;i++) if(a[i]<a[i-1]) sorted=false;
// if(sorted)cout<<"t";
// else cout<<'f';


// int mx=a[0];
// for(int i=1;i<n;i++) 
//  mx=max(mx,a[i]);
// cout<<mx;

// int mn=a[0];
// for(int i=1;i<n;i++) mn=min(mn,a[i]);
// cout<<mn;

// int first=INT_MIN, second=INT_MIN;
// for(int x:a){
//     if(x>first){
//          second=first; 
//          first=x;
//      }
//     else if(x>second && x!=first) second=x;
// }
// cout<<second;

// int key=4;
// for(int i=0;i<n;i++) if(a[i]==key) cout<<i;


// vector<int>a={1,2,3,4,5,5,6,6,7,7,8};
// unordered_set<int>s;
// for(int x:a){ 
//     if(s.count(x))
//     cout<<x; 
// s.insert(x); 
// }


//unique elements;
// unordered_map<int,int>m;
// for(int x:a) 
//     m[x]++;

// for(auto p:m)
//  if(p.second==1)
//   cout<<p.first<<" ";



// string s="ajay";
// for(char c:s) {
//     char t=toupper(c);
//     cout<<t;
// }


// int len=0;
//  for(char c:s)
//   len++;

// cout<<len;


// First Repeating Character
// string s="ajyy";
// unordered_set<char>st;
// for(char c:s){
//      if(st.count(c)){ 
//         cout<<c; 
//         // break;
//     } 
//     st.insert(c);}


// int n=876;
// int rev=0,temp=n;
// while(temp){ 
//     rev=rev*10+temp%10;
//     temp/=10;
//  }
// cout<<(rev==n);
// cout<<rev;

// int sum=0;
//  while(n){ 
//     sum+=n%10; 
//     n/=10; 
// }
// cout<<sum;

// int n=31;
// bool prime=true;
// for(int i=2;i*i<=n;i++) 
//     if(n%i==0) 
//         prime=false;

// if(prime)cout<<"prime ";
//  else cout<<"not prime";



}