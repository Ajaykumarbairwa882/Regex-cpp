#include <iostream>
using namespace std;

int main() {
    cout << "Our Menu:\n";
    cout << "1. Pizza - 200\n";
    cout << "2. Burger - 100\n";
    cout << "3. Momos - 80\n";
    cout << "4. Coffee - 120\n";

    int items;
    cout << "How many items do you want? ";
    cin >> items;

    int itemnum;
    double bill = 0;
    bool coffeeOrdered = false;

    for (int i = 0; i < items; i++) {
        cout << "Enter item number: ";
        cin >> itemnum;

        if (itemnum == 1) bill += 200;
        else if (itemnum == 2) bill += 100;
        else if (itemnum == 3) bill += 80;
        else if (itemnum == 4) {
            bill += 120;
            coffeeOrdered = true;
        } else {
            cout << "Invalid item number!\n";
        }
    }
    
    if (coffeeOrdered) {
        bill = bill - (bill * 0.20);  
    }
    if (bill > 500) {
        cout << "Free delivery!\n";
    } else {
        bill += 50;
    }

    cout << "Final " << bill << endl;

    return 0;
}
