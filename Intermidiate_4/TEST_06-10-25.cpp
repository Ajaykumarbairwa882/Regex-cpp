#include <bits/stdc++.h>
using namespace std;

void secondMinimum(vector<int> v)
{
    sort(v.begin(), v.end()); 

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[0])
        {
            cout << v[i] << endl; 
            return;
        }
    }

    cout << "Not found" << endl;
}

void rotateArraykStep(vector<int> v, int k)
{
   
    k = k % v.size(); 
    vector<int>rotate;
    for (int i =v.size()-k; i <v.size(); i++)
    {
        rotate.push_back(v[i]);
    }

    for (int i = 0; i <v.size()-k; i++)
    {
        rotate.push_back(v[i]);
    }
    cout << endl;
    for(auto x:rotate){
        cout<<x<<" ";
    }
}

int main()
{
    cout<<"Second minimum 👇👇👇"<<endl;
    vector<int> v1 = {5, 3, 1, 3, 2, 1};
    vector<int> v2 = {7, 7, 7, 7};
    vector<int> v3 = {4, 5, 6, 2, 8};
    vector<int> v4 = {1, 2};

    secondMinimum(v1);
    secondMinimum(v2);
    secondMinimum(v3);
    secondMinimum(v4);

    cout<<"rotate Array 👇👇👇👇"<<endl;

    vector<int> v1 = {1,2,3,4,5};
    int k1=2;
    vector<int> v2 = {10,20,30,40,50};
    int k2=3;
    vector<int> v3 = {5,7,9,11,13};
    int k3=1;
    vector<int> v4 = {1,2,3};
    int k4=3;
    
    rotateArraykStep(v1, k1);
    rotateArraykStep(v2, k2);
    rotateArraykStep(v3, k3);
    rotateArraykStep(v4, k4);


    cout<<"Max diff. b/w to any elements "<<endl;
    
}
