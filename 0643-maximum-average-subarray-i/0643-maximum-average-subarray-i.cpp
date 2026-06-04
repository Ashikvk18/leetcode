class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;
        double avg = 0;
        double ans = 0;

        for (int i = 0; i < k; i++) {
            curr += nums[i];
        }

        avg = curr / k;
        ans = avg;

        for (int i = k; i < nums.size(); i++) {
            curr = curr - nums[i - k] + nums[i];
            avg = curr / k;
            ans = max(ans, avg);
        }

        return ans;
    }
};