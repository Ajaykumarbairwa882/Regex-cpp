#include <iostream>
using namespace std;

        //  ** 
        // ****
        // 1234
        //  12

int main() {
    int n = 4; 
    for (int i = 1; i <= 2; i++) {   
        for (int j = 1; j <= n; j++) {
            if (i==2||j==2||j==3) {   
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= 2; i++) {  
        for (int j = 1; j <= n; j++) {
            if (i==1) {  
                cout << j;
            } else if(j==2||j==3) {
                cout << j-1;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
