#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,3,-1,-3,5,3,6,7};
    int k=3;
    int i=0,j=0;
    deque<int>q;
    vector<int>ans;

    while(j<v.size()){
        while(!q.empty() && v[q.back()]<v[j]){
            q.pop_back();
        }
        q.push_back(j);

        if(j-i+1<k)j++;

        else{
            ans.push_back(v[q.front()]);
            if(q.front()==i){
                q.pop_front();
            }
            i++;
            j++;
        }

    }
    for(auto x:ans){
        cout<<x<<" ";
    }

}