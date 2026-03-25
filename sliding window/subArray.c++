#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0;
        int sum = 0;
        int mini = INT_MAX;

        while (high < nums.size()) {
            sum += nums[high];

            while (sum >= target) {
                mini = min(mini, high - low + 1);
                sum -= nums[low];
                low++;
            }

            high++;
        }

        return (mini == INT_MAX) ? 0 : mini;
    }
};

int main() {
    Solution obj;

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

    int result = obj.minSubArrayLen(target, nums);
    cout << "Minimum subarray length: " << result << endl;

    return 0;
}