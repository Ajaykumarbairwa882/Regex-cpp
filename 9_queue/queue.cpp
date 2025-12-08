#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // int sum=0;
    
    //   while(!q.empty()) {
    //     // cout << q.front() << " ";
    //     // sum+=q.front();
    //     q.pop();
    // }

    // cout<<"sum : "<<sum<<endl;
    cout<<"size : "<<q.size()<<endl;
    cout<<"front element : "<< q.front()<<endl;
    cout<<"last element : "<<q.back()<<endl;
    q.pop();
    q.pop();
    cout<<"after remove 2 element : "<<q.front()<<endl;

    return 0;

}