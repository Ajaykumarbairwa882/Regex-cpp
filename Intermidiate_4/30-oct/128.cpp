#include <bits/stdc++.h>
using namespace std;
  /*  Question 1: Longest Consecutive Sequence (Twist Version)
                Given an unsorted array of integers nums, return the length of the longest consecutive
                sequence of numbers. You must write an algorithm that runs in O(n) time.
                Example:
                Input: nums = [100, 4, 200, 1, 3, 2]
                Output: 4
                Explanation: The longest consecutive elements sequence is [1, 2, 3, 4].
                Twist:
                Modify your solution to also return the actual sequence (as a sorted list) along with its length.
                Expected Output Example:
                Input: nums = [100, 4, 200, 1, 3, 2]
                Output: length = 4, sequence = [1, 2, 3, 4]
                Constraints:
                1 <= nums.length <= 10^5
                -10^9 <= nums[i] <= 10^9*/

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) {
        cout << "Length = 0, Sequence = []";
        return 0;
    }

    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;
    vector<int> bestSeq;

    for (int num : s) {
        if (s.find(num - 1) == s.end()) { // start of sequence
            int current = num;
            vector<int> seq = {num};

            while (s.find(current + 1) != s.end()) {
                current++;
                seq.push_back(current);
            }

            if (seq.size() > longest) {
                longest = seq.size();
                bestSeq = seq;
            }
        }
    }
   
  
    cout << "Length = " << longest << endl;
    cout << "Sequence = [";
    for (int i = 0; i < bestSeq.size(); i++) {
        cout << bestSeq[i]<<",";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

  longestConsecutive(nums);

    return 0;
}
