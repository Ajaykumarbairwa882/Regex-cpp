#include<iostream>
using namespace std;
void hot() {
    cout << "temprature high =>hot" << endl;
}

void cold() {
    cout << "temprature low =>cold " << endl;
}
void Moderate() {
    cout << "temprature normal " << endl;
}


int main(){
    int temp;
    cout<<"enter temparature ";
    cin>>temp;
    if(temp>30){
        hot();
    }
    else if(temp<10){
        cold();
    }
    else{
        Moderate();
    }
    return 0;
}