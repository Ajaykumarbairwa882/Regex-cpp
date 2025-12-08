// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// Q.1
//     int n=5;
//     for(int i=1;i<=5;i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// Q.2

//     int n=5;

//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


// Q.3
//     int n=5;

//     for(int i=0; i<n; i++){
//         int temp=1;
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
        
//         for(int j=0; j<=i; j++){
//             cout<<temp<<" ";
//             temp=temp*(i-j)/(j+1);
//         }
//         cout<<endl;
//     }


// Q.4
//     int n=5;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i; j++){
//             if(i==j||j==1 ||i==n )cout << "* ";
//             else cout << "  ";
//         }
//         cout<<endl;
//     }

// Q.5
    // int n=9;

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==0&&j%4==0) cout<<"*";
    //         else if (i==1&&j%2==1)cout<<"*";
    //         else if(i==2&&(j-2)%4==0)cout<<"*";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    
// Q.6
//     vector<int> v;
//     int n;
//     for(int i=0;i<5;i++){
        
//         cin>>n;
//         v.push_back(n);
//     }
//     cout<<"vector :";
//     for(int j=0;j<v.size(); j++){
//         cout<< v[j]<<" ";
//     }
//     cout<<endl;

// Q.7
//        vector<int>v;
//        int n;
//         cout << "Enter 5 numbers: " << endl;
//        for(int i=0;i<5;i++){
//         cin>>n;
//         v.push_back(n);
//        }
//         int max=v[0],min=v[0];

//        for(int j=1;j<5;j++){
//         if(v[j]>max)max=v[j];
//         if(v[j]<min)min=v[j];
//        }
//         cout << "Maximum = " << max << endl;
//         cout << "Minimum = " << min << endl;


// Q.8
//     vector<int>v1,v2,v3;
//     v1={1,2,3,4,5};
//     v2={6,7,8,9,10};
    
//     for(int i=0; i<v1.size();i++){
//         v3.push_back(v1[i]);
//     }
//      for(int i=0; i<v2.size();i++){
//         v3.push_back(v2[i]);
//     }

//      for(int i=0; i<v3.size();i++){
//         cout<<v3[i]<<" ";
//     }

// Q.9
//     vector<int>v={1,2,3,4,54};
//     for(int i=v.size()-1; i>=0; i--){
//         cout<<v[i]<<" ";
//     }

// Q.10
//     int count=0;
//     vector<int>v={1,2,3,4,5,6,7,8,9};
//     int key=41;

//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] == key) {
//             cout << "Element found at index " << i << endl;
//             count++;
//             break;
//         }
//     }
//     if (count==0) {
//         cout << "Element not found " << endl;
//     }
   
// }