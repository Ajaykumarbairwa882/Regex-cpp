// Rearrange the array
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> rearrangeAlternately(vector<int> arr) {
//     int n = arr.size();
//     vector<int> result;
//     int i = 0, j = n - 1;

//     while (i <= j) {
//         if (i != j) {
//             result.push_back(arr[j--]);
//             result.push_back(arr[i++]);
//         } else {
//             result.push_back(arr[i++]);
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

//     vector<int> result = rearrangeAlternately(arr);

//     cout << "Rearranged array: ";
//     for (int x : result) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }



