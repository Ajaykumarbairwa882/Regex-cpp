#include <bits/stdc++.h>
using namespace std;

int maximumsteps(vector<int>& steps, int k) {
    int i = 0, j = 0;
    int sum = 0, maxSteps = 0;

    while (j < steps.size()) {
        sum += steps[j];

        if (j - i + 1 < k) {
            j++;
        } else {
            maxSteps = max(maxSteps, sum);

            sum -= steps[i];
            i++;
            j++;
        }
    }

    return maxSteps;
}

int main() {
    vector<int> steps = {300, 100, 400, 200, 500, 100};
    int k = 2;

    cout << maximumsteps(steps, k);
    return 0;
}
