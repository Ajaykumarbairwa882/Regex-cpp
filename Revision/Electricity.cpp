#include <iostream>
using namespace std;

int main() {
    int customers;
    cout << "Enter number of customers: ";
    cin >> customers;

    string name[100];
    int units[100];
    double bill[100];

    for (int i = 0; i < customers; i++) {
        cout <<"Enter name: ";
        cin >> name[i];
        cout <<"Enter units : ";
        cin >> units[i];

        if (units[i] <= 100)
            bill[i] = units[i] * 5;
        else if (units[i] <= 300)
            bill[i] =units[i] * 7;
        else
            bill[i] = units[i] * 10;

        if (bill[i] > 2000)
            bill[i] += bill[i] * 0.05;
    }
    cout<<"=============================="<<endl;
    for (int i = 0; i < customers; i++) {
        cout <<"name: "<< name[i]<<endl;
        cout<< "Units: " << units[i]<<endl;
        cout<< "Bill: " << bill[i] << endl;
    }

    return 0;
}
