#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0 , high = 0;
        int sum = 0;
        int mini = INT_MAX;

        while (high < nums.size()) {
            // expand the window
            sum = sum + nums[high];

            // shrink window if condition satisfied
            while (sum >= target) {
                int len = high - low + 1;
                mini = min(mini, len);
                sum = sum - nums[low];
                low++;
            }

            high++; // move forward
        }

        if (mini == INT_MAX) {
            return 0;
        } else {
            return mini;
        }
    }
};

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    int result = obj.minSubArrayLen(target, nums);

    cout << "Minimum subarray length: " << result << endl;

    return 0;
}