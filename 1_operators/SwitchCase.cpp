#include<iostream>
using namespace std;
int main(){
    // int  day;
    // cout<<"enter num ";
    // cin>>day;
    // switch(day){
    //     case 1:
    //         cout<<"monday"<<endl;
    //         break;
    //     case 2:
    //         cout<<"tuseday"<<endl;
    //         break;
    //     default:
    //         cout<<"not found";
    // }

    //calculate

    int a;
    cout<<"enter num1 :"<<endl;
    cin>>a;

    int b;
    cout<<"Enter num2 :"<<endl;
    cin>>b;

    char ch;
    cout<<"Enter the operator :";
    cin>>ch;

    switch(ch){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;

    }

    return 0;
}