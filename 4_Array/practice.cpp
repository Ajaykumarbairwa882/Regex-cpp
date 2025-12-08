#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Q.1 maximum number find in the vector
        vector<int> v = {3,9,13,11};
        // v.push_back(50);
        int max= v[0];
        int second=v[0];
        for (int i = 1; i < v.size(); i++) {
            if (v[i] > max) {
                second=max;
                max=v[i];
            }
            else if(v[i]<max && v[i]>second){
                second=v[i];
            }
        }
        cout << "Maximum element: " << max << endl;
        cout<<"second element :"<<second;
    

// Q.2=> odd even 
                // vector <int> v={38,73,41,99,101,138,41};
                // int even=0;
                // int odd=0;
                // for (int i = 0; i <=v.size(); i++) {
                //     if (v[i] % 2 == 0) {
                //             even++;
                //     } else {
                //         odd++;
                //     }
                // }
                // if(even>odd) cout<<"even is big";
                // else cout<<"odd is big ";

            // vector<int>v={1,10,8,9};
            // int i=0;
            // int j=1;
            // while(j<v.size()){
            //     if (v[i] > v[j]) {
            //     cout<<"not sorted";
            //     return 0;
            //     }
            //     i++;
            //     j++;
            // }
            // cout<<"sorted";



// Q.
    //  for(int i=1; i<=4; i++){
    //     for(int j=1; j<=3; j++){
    //         if(i==1&&j%2==0)cout<<1;
    //         else if(i==2) cout<<j+1;
    //         else if(i==3)cout<<"*";
    //         else if(i==4&&j%2==0)cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}

