#include <iostream>
#include <vector>
using namespace std;
    /*Question 2: Subarray Sum Equals K (Tricky Version)
                Given an integer array nums and an integer k, return the total number of continuous subarrays
                whose sum equals to k.
                Example:
                Input: nums = [1, 2, 3], k = 3
                Output: 2
                Explanation: The subarrays are [1, 2] and [3].
                Twist:
                Also return the list of all such subarrays that sum to k.
                Expected Output Example:
                Input: nums = [1, 2, 3, -1, 2], k = 3
                Output: count = 3, subarrays = [[1, 2], [3], [1, 2, 3, -1, -2]]
                Constraints:
                1 <= nums.length <= 2 * 10^4
                -1000 <= nums[i] <= 1000
                -10^7 <= k <= 10^7*/
                
int subarray(vector<int> n, int k) {
    int count = 0;

    for (int i = 0; i < n.size(); i++) {
        int sum = 0;
        vector<int> temp;
        for (int j = i; j < n.size(); j++) {
            sum += n[j];
            temp.push_back(n[j]);

            if (sum == k) {
                count++;
                cout << "[ ";
                for (int num : temp)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, -1, -2};
    int k = 3;

    int count = subarray(nums, k);
    cout << "Total subarrays = " << count << endl;

    return 0;
}
