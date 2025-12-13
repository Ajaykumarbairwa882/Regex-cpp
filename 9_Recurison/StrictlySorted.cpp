#include<bits/stdc++.h>
using namespace std;
bool strictlySort(vector<int> &arr, int i) {
    if (i == arr.size() - 1) return true;

    if (arr[i+1] != arr[i] + 1) return false;

    return strictlySort(arr, i + 1);
}
int main(){
    vector<int>v={1,2,3,4,7};
    int ans=strictlySort(v,0);
    if(ans==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}