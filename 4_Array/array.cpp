#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int array[]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0; i<10; i++){
    //     cout << array[i] <<endl;
    // }
    vector < int >v={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    cout<<"size of vector : "<<v.size()<<endl;
    v.push_back(99);
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl<<"size of v :  "<<v.size();
    return 0;
}  