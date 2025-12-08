#include<iostream>
// using namespace std;
// int main(){

    // Q.1
    //     int n;
    //     cout<<"Enter a number :";
    //     cin>>n;

    //     if(n%2==0) cout<<"Even"<<endl;
    //     else cout<<"odd";
        
    // Q.2
    //     int a,b,c;
    //     cout<<"Enter a,b,c"<<endl;
    //     cin>>a>>b>>c;
    //     if(a>b&&a>c)cout<<a <<" is greatest"<<endl;
    //     else if(b>a&&b>c) cout<<b<<" is greatest"<<endl;
    //     else cout<<c<< " is greatest";

    // Q.3
    //     char ch;
    //     cout<<"Enter a charactor :";
    //     cin>>ch;

    //     if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' ||ch=='u') cout<<ch<<" is a vowel";
    //     else cout<<ch<<" is a consonant";


    // Q.4
    //         int marks;
    //         cout << "Enter marks: ";
    //         cin >> marks;

    //         if (marks >= 40)cout << "Pass\n";
    //         else cout << "Fail\n";

    // Q.5
    //     int day;
    //     cout << "Enter day number: ";
    //     cin >> day;

    //     switch (day) {
    //         case 1: cout << "Monday\n"; break;
    //         case 2: cout << "Tuesday\n"; break;
    //         case 3: cout << "Wednesday\n"; break;
    //         case 4: cout << "Thursday\n"; break;
    //         case 5: cout << "Friday\n"; break;
    //         case 6: cout << "Saturday\n"; break;
    //         case 7: cout << "Sunday\n"; break;
    //         default: cout << "Invalid input!\n";
    //     }


    // Q.6
    //     int a, b;
    //     char op;
    //     cout << "Enter two numbers: ";
    //     cin >> a >> b;
    //     cout << "Enter operator (+,-,*,/): ";
    //     cin >> op;

    //     switch (op) {
    //         case '+': cout << "Sum = " << a + b << endl; break;
    //         case '-': cout << "Sub = " << a - b << endl; break;
    //         case '*': cout << "Mult = " << a * b << endl; break;
    //         case '/': cout << "Div = " << a / b << endl;
    //         default: cout << "Invalid operator\n";
    //     }

    // Q.7
    //     int num;
    //     cout << "Enter a number: ";
    //     cin >> num;
    //     if (num > 0)cout << "Positive\n";
    //     else if (num < 0)cout << "Negative\n";
    //     else cout << "Zero\n";

    // 8
            // int year;
            // cout << "Enter year: ";
            // cin >> year;
            // if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            //     cout << year << " is a Leap Year\n";}
            // else cout << year << " is NOT a Leap Year\n";

    // 9
    //     int month;
    //     cout << "Enter month number : ";
    //     cin >> month;

    //     switch (month) {
    //         case 1: cout << "January"<<endl; break;
    //         case 2: cout << "February"<<endl; break;
    //         case 3: cout << "March"<<endl; break;
    //         case 4: cout << "April"<<endl; break;
    //         case 5: cout << "May"<<endl; break;
    //         case 6: cout << "June"<<endl; break;
    //         case 7: cout << "July"<<endl; break;
    //         case 8: cout << "August"<<endl; break;
    //         case 9: cout << "September"<<endl; break;
    //         case 10: cout << "October"<<endl; break;
    //         case 11: cout << "November"<<endl; break;
    //         case 12: cout << "December"<<endl; break;
    //         default: cout << "Invalid input!"<<endl;
    //     }

    // 10
    //     for (int i = 1; i <= 10; i++)
    //     cout << i <<endl;

    // 11
    //         int n, fact = 1;
    //         cout << "Enter a number: ";
    //         cin >> n;

    //         for (int i = 1; i <= n; i++){
    //             fact =fact*i;
    //             cout << "Factorial = " << fact << endl;
    //         }
    //         while(0<n){
    //             fact=fact*n;
    //             n--;
    //         }
    //         cout<<"Factorial = "<<fact;

    // 12
    //     int n;
    //     cout << "Enter a number: ";
    //     cin >> n;

    //     for (int i = 1; i <= 10; i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    //     }

    // 13
    //     int i = 1;
    //     while (i <= 50) {
    //         cout << i <<endl;
    //         i++;
    //     }

    // 14
    //     int num, sum = 0;
    //     cout << "Enter a number: ";
    //     cin >> num;

    //     while (num > 0) {
    //         sum =sum+ num % 10;
    //         num /= 10;
    //     }
    //     cout << "Sum of digits = " << sum << endl;

    // 15
    //         int num, reverse = 0;
    //         cout << "Enter a number: ";
    //         cin >> num;

    //         while (num > 0) {
    //            int rem = num % 10;
    //             reverse=reverse*10 +rem;
    //             num /= 10;
    //         }
    //         cout << "Reversed number = " << reverse << endl;

    // 16
    //         int i = 1;
    //         do {
    //             cout << i <<endl;
    //             i++;
    //         } while (i <= 10);
    // 17
    //     int num;
    //     do {
    //         cout << "Enter a number ";
    //         cin >> num;
    //     } while (num != 0);
    //     cout << "Program ended.\n";

    // 18
    //     int n, sum = 0;
    //     cout << "Enter N: ";
    //     cin >> n;

    //     do {
    //         sum=sum+n;
    //         n--;
    //     } while (0 < n);
    //     cout << "Sum = " << sum << endl;
    

    // 19
    //     int n;
    //     bool isprime=true;
    //     cout<<"Enter a num =";
    //     cin>>n;

    //     for (int i = 2; i < n; i++){
    //         if(n%i==0){
    //             isprime=false;
    //         }
    //     }
    //     if(isprime) cout<<n<<" is a prime number.";
    //     else cout<<n<<" is not a prime";

    // 20
    //     int n;
    //     cout << "Enter size of array: ";
    //     cin >> n;

    //     int arr[n];
    //     cout << "Enter elements: ";
    //     for (int i = 0; i < n; i++){
    //         cin >> arr[i];
    //     }
    //     int largest = arr[0];
    //     for (int i = 1; i < n; i++) {
    //         if (arr[i] > largest)
    //             largest = arr[i];
    //     }
    //     cout << "Largest element = " << largest << endl;
    // return 0;
// }