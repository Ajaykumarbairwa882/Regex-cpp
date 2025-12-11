// #include <bits/stdc++.h>
// using namespace std;

// void reverse(vector<int> &s, int i, int j) {
//     if (i >= j) return;

//     swap(s[i], s[j]);        
//     reverse(s, i + 1, j - 1); 
// }

// int main() {

//     vector<int> s = {1, 2, 3, 4, 5};   

//     reverse(s, 0, s.size() - 1);

//     for (auto x : s) {
//         cout << x << " ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int reverse(int n , int ans=0) {
//     if(n==0)return ans;
//     ans=ans*10+n%10;
//     return reverse(n/10,ans);
// }

// int main() {
//     int n=12345;
//     cout<<reverse(n);
//     return 0;
// }