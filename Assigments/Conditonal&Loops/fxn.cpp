#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int max(int a,int b){
    return a>b?a:b;
}

string evenOdd(int n) {
    return (n % 2 == 0) ? "Even" : "Odd";
}

int factorial(int n) {
    int fact=1;
   while(0<n){
        fact*=n;
        n--;
   }
    return fact;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum; 
}

bool isPrime(int n) {
   bool isprime=false;
   for(int i=2;i<n;i++){
    if(n%i==0){
         isprime=true;
         break;
      }
   }
   return !isprime;
}

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int square(int n) {
    return n * n;
}

void fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int cube(int n) {
    return n * n * n;
}


int main(){
    int a= 5;
    int b = 10;
    cout << "The sum is: " << add(a, b) << endl;
    cout<<"the max is :"<<max(a,b)<<endl;
    cout<<"Even or Odd: " << evenOdd(a) << endl;
    cout << "Factorial of " << a << " is: " << factorial(a) << endl;
    cout << "Sum of digits of " << b << " is: " << sumOfDigits(b) << endl;
    cout << b << " is prime: " << (isPrime(b) ? "True" : "False") << endl;
    swapNumbers(a, b);
    cout << "After swapping, a: " << a << ", b: " << b << endl;
    cout << "Square of " << a << " is: " << square(a) << endl;
    cout << "Fibonacci series up to " << b << " terms: ";
    fibonacci(b);
    cout << endl;
    cout << "Cube of " << a << " is: " << cube(a) << endl;
}


