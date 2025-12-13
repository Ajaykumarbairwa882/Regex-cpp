#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,3,5,6,6,7};
    int k=3;
    int i=0,j=0,sum=0,maxsum=0;

    while(j<v.size()){
        sum+=v[j];
        if(j-i+1 < k)
        { j++;}

       else{ 

        maxsum=max(maxsum,sum);
        sum=sum-v[i];
        i++;
        j++;
       }
    }
    cout<<maxsum;
    return 0;

}