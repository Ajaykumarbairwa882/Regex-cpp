#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // vector<int> v = {37,89,33,48}; 
    // cout << "size of vector : "<<v.size()<<endl; 
    // cout<<"first element : "<<v.front()<<endl;
    // cout<<"last element : "<<v.back()<<endl;
    // // cout<<"remove last"
    // cout<<v.insert(v.begin()+2,100);

    //Q.1=> sum of all elements.
    // int sum=0;
    // for(int i=0; i<v.size(); i++) {
    //     sum =sum+v[i];
    // }
    //  cout <<sum << endl;


    // Q.2=> print reverse order vector
    // vector<int> v = {3,9,7,4}; 
    // for(int i=v.size()-1; i>=0; i--) {
    //     cout << v[i] << " ";
    // }

    // Q.3 => reverse vector with swap
        // vector<int>v={3,8,7,6};
        // int i=0;
        // int j=v.size()-1;
        // while(i<j){
        //     swap(v[i],v[j]);
        //     i++;
        //     j--;
        //     }
        // for(int k=0; k<v.size(); k++) {
        //     cout << v[k] << " ";
        // }
    
    // Q.4  palindrome vector
        // vector<int> v = {1,2,2,1};
        // bool isPalindrome = true;
        // int i = 0;
        // int j = v.size() - 1;
        // while (i < j) {
        //     if (v[i] != v[j]) {
        //         isPalindrome = false;
        //         break;
        //     }
        //     i++;
        //     j--;
        // }
        // if (isPalindrome) {
        //     cout << "palindrome." << endl;
        // } else {
        //     cout << "not a palindrome." << endl;
        // }

        // Q.5 print odd index 

        // vector<int>v={3,4,5,6,7};
        // for(int i=0; i<v.size(); i++) {
        //     if(i%2!=0) {
        //         cout << v[i] << " ";
        //     }
        // }

        // int i=1;
        // while(i<v.size()) {
        //         cout << v[i] << " ";
        //     i+=2;
        // }
        
    return 0;
   }
