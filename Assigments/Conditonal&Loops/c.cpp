// Q.1
//    #include<iostream>
//     using namespace std;
//     void Positive() {
//         cout << "The number is Positive " << endl;
//     }

//     void Negative() {
//         cout << "The number is Negative" << endl;
//     }
//     int main(){
//         int n;
//         cout<<"enter a number : ";
//         cin>>n;
//         if(n>=0){
//             Positive();
//         }
//         else {
//             Negative();
//         }
//         return 0;
//     }

// Q.2
//     #include<iostream>
//     using namespace std;
//     void adult() {
//         cout << "you are adult. " << endl;
//     }

//     void minor() {
//         cout << "you are minor" << endl;
//     }
//     int main(){
//         int age;
//         cout<<"enter your age : ";
//         cin>>age;
//         if(age>=18){
//             adult();
//         }
//         else {
//             minor();
//         }
//         return 0;
//     }

// Q.3
//     #include<iostream>
//     using namespace std;
//     void divisibleby() {
//         cout << "divisible by 5 ." << endl;
//     }

//     void notdivisible() {
//         cout << "not divisible by  5." << endl;
//     }
//     int main(){
//         int n;
//         cout<<"enter a num : ";
//         cin>>n;
//         if(n%5==0){
//             divisibleby();
//         }
//         else {
//             notdivisible();
//         }
//         return 0;
//     }
// Q.4
//     #include<iostream>
//     using namespace std;
//     void pass() {
//         cout << "pass ho gya" << endl;
//     }

//     void fail() {
//         cout << "fail ho gya " << endl;
//     }
//     int main(){
//         int marks;
//         cout<<"enter your marks: ";
//         cin>>marks;
//         if(marks>=50){
//             pass();
//         }
//         else {
//             fail();
//         }
//         return 0;
//     }

// Q.5
//     #include<iostream>
//     using namespace std;
//     void hot() {
//         cout << "temprature high =>hot" << endl;
//     }
//     void cold() {
//         cout << "temprature low =>cold " << endl;
//     }
//     void Moderate() {
//         cout << "temprature normal " << endl;
//     }
//     int main(){
//         int temp;
//         cout<<"enter temparature ";
//         cin>>temp;
//         if(temp>30){
//             hot();
//         }
//         else if(temp<10){
//             cold();
//         }
//         else{
//             Moderate();
//         }
//         return 0;
//     }
// Q.6
//     #include <iostream>
//     using namespace std;
//     void Vowel() {
//         cout << "Vowel "<<endl;
//     }
//     void Consonant() {
//         cout << " Consonant"<<endl;
//     }
//     int main() {
//         char ch;
//         cout << "Enter a character: ";
//         cin >> ch;
//         ch = tolower(ch);
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             Vowel();
//         } 
//         else{
//             Consonant();
//         } 
//         return 0;
//     }

// Q.7
//     #include <iostream>
//     using namespace std;
//     void Even() {
//         cout << "number is Even" << endl;
//     }
//     void Odd() {
//         cout << "number is Odd " << endl;
//     }
//     int main() {
//         int num;
//         cout << "Enter a number: ";
//         cin >> num;
//         if (num % 2 == 0) {
//             Even();
//         } else {
//             Odd();
//         }
//         return 0;
//     }

// Q.8
//     #include <iostream>
//     using namespace std;
//     void HighSalary() {
//         cout << "High Salary" << endl;
//     }
//     void LowSalary() {
//         cout << "Low Salary " << endl;
//     }
//     int main() {
//         int salary;
//         cout << "Enter your salary: ";
//         cin >> salary;
//         if (salary > 50000) {
//             HighSalary();
//         } else {
//             LowSalary();
//         }
//         return 0;
//     }

// Q.9
//     #include <iostream>
//     using namespace std;
//     void OverSpeed() {
//         cout << "You are Overspeeding" << endl;
//     }
//     void NormalSpeed() {
//         cout << "Your speed is Normal." << endl;
//     }
//     int main() {
//         int speed;
//         cout << "Enter vehicle speed: ";
//         cin >> speed;

//         if (speed > 80) {
//             OverSpeed();
//         } else {
//             NormalSpeed();
//         }
//         return 0;
//     }

// Q.10
//     #include <iostream>
//     using namespace std;
//     void LeapYear() {
//         cout << "It is a Leap Year." << endl;
//     }
//     void NotLeapYear() {
//         cout << "It is NOT a Leap Year." << endl;
//     }
//     int main() {
//         int year;
//         cout << "Enter a year: ";
//         cin >> year;
//         if (year % 4 == 0 ||year%400==0) {
//             LeapYear();
//         } else {
//             NotLeapYear();
//         }
//         return 0;
//     }
