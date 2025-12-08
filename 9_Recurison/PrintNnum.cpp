// #include<bits/stdc++.h>
// using namespace std;

// void printN(int n){
//     if(n>5)return; 
//     cout<<n<<" ";
//     cout<<printN(n+1);
// }

// int main(){ 
//     printN(1);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printN(int n) {
//     if(n > 5) return;   
//     cout << n << " ";   
//     printN(n + 1);    
// }

// int main() {
//     printN(1);          
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printN(int n) {
    if(n ==0) return;   
    cout << "ajay"<<endl;   
    printN(n - 1);    
}

int main() {
    printN(101);          
    return 0;
}
