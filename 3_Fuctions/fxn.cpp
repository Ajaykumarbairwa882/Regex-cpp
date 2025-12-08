#include <iostream>
using namespace std;

int sum (int a,int b){
    int ans=a+b;
    return ans;
}
int mult (int a,int b){
    int ans=a*b;
    return ans;
}
void fun(int a,int b){
    std::cout << "hello bhaiya" << std::endl;
    int d=a/b;
    cout<<d;
}



int main(){
    int n,m;
    cin>>m>>n;
    // cout<<sum(m,n)<<endl;
    // cout<<mult(n,m)<<endl;
    fun(n,m);
   
};