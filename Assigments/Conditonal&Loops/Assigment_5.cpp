#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
// // Q.1
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<j;
//         }
//         for(int a=i-1; a>=1; a-- ){
//             cout<<a;
//         }
//         cout<<endl;
//     }

// // QQ.2
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         for(int a=i-1; a>=1; a-- ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }
//         for(int a=i-1; a>=1; a-- ){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


// // Q.3
//     for (int i = 0; i < n; i++) {
        
//         for (int space = 0; space < n - i - 1; space++)
//             cout << " ";

//         int temp = 1; 
//         for (int j = 0; j <= i; j++) {
//             cout << temp << " ";
//             temp = temp * (i - j) / (j + 1); 
//         }
//         cout << endl;
//     }

// // Q.4`
    //  for(int i=1; i<=n; i++){
    //     for(int j=n; j>=1; j--){
    //         if(i==j || i==n)cout<<"*";
    //         else cout<<" ";
    //     }
    //     for(int j=2; j<=n; j++){
    //         if(i==j || i==n)cout<<"*";
    //         else cout<<" ";
    //     }
        
    //     cout<<endl;
    // }
// // Q.4
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //      for (int k = 1; k <= i; k++) {
    //         if (k == 1 || k == i || i == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout<<endl;
    // }

  

    return 0;


}