class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;

        for (int i = 0; i < k; i++) {
            curr += nums[i];
        }

        double maxSum = curr;

        for (int i = k; i < nums.size(); i++) {
            curr = curr - nums[i - k] + nums[i];
            maxSum = max(maxSum, curr);
        }

        return maxSum / k;
    }
};