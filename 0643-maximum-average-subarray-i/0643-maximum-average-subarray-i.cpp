class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0;
        for(double i = 0; i < k; i++){
            curr += nums[i];
        }
        double avg = curr / k;
        double ans = avg;
        for(double i = k; i < nums.size(); i++){
            curr = curr - nums[i-k] + nums[i];
            avg = curr / k;
            ans = max(ans,avg);
        }
        return ans;
    }
};