#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int>& v){
    int n = v.size();
    int j = 1;

    for(int i = 1; i < n; i++){
        if(v[i] != v[i - 1]){
            v[j] = v[i];
            j++;
        }
    }
    return j; 
}

int main(){
    vector<int> v = {1,1,2,3,4,4,5};
    
    int k = duplicate(v);
    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
