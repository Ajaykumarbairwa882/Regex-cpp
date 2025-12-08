#include<iostream>
#include<vector>
using namespace std;


//  int greatest(int a,int b,int c,int d){
//         if(a>=b && a>=c && a>=d) return a;
//         else if (b>=11 && b>=c && b>=d) return b;
//         else if(c>=a && c>=b && c>=d) return c;
//         else return d;
//     }
    
int main(){
    // int k=1;
    // for(int i=1; i<=3; i++){
    //     for(int j=1; j<=3; j++){
    //         cout<<k<<" * ";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // cout<<"greatetst number : "<<greatest(a,b,c,d);

    // vector<int>v={0,1,2,3,5};
   
    // int sum=0;
    //  int vsum=0;
    // for(int i=1; i<=v.size()-1;i++){
    //     sum+=v[i];
    // }
    
    // for(int i=0; i<=v.size();i++){
    //     vsum+=i;
    // }
    // int result=vsum-sum;
    // cout<<result;
   


    // vector<int>v={3,0,1,9};
    // int i=0;
    // int j=1;
    // for(int K=0; K<v.size()-1;K++){
    //     if(v[i]<v[j]){
    //         swap(v[i],v[j]);
    //     }
    //     j++;
    //     i++;
    // }
    // for(int a=0; a<v.size();a++){
    //     cout<<v[a]<<" ";
    // }

    int i=0;
    int n=4;
    vector<int>v={3,0,1,9};
    for(int j=1; j<n; j++){
        if(v[i]== 0){
            swap(v[i],v[j]);
        }
        i++;
    }
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }

}