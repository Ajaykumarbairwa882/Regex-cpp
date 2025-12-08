#include <iostream>
using namespace std;

int main() {
    int choice, transactions;
    float balance = 10000.0, amount;

    cout << "Enter number of transactions: ";
    cin >> transactions;

    for (int i = 1; i <= transactions; i++) {
        cout << "Transaction " << i << ":\n";
        cout << "1. Withdraw"<<endl<< "2. Deposit"<<endl<<"3. Balance Inquiry"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;

        
            if(choice==1){
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 5000) {
                    cout << " Withdrawal limit is ₹5000 at once."<<endl;
                } 
                else if (amount > balance) {
                    cout << " Insufficient balance."<<endl;
                } 
                else {
                    balance -= amount;
                    cout << " Withdrawal successful. Remaining balance: " << balance << endl;
                }
                
            }

            else if (choice==2){
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << " Deposit successful. New balance: " << balance << endl;
                
            }
            else if(choice==3){
                cout << "Current balance: ₹" << balance << endl;
            
            }
            else
                cout << "Invalid choice. Please try again."<<endl;
        
    }

    cout << "Final Balance after all transactions: " << balance << endl;

    return 0;
}
