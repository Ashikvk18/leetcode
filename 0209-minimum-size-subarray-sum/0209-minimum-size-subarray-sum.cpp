class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int ans = INT_MAX;
        int curr = 0;
        for(; r < nums.size(); r++){
            curr += nums[r];
            while(curr >= target){
                ans = min(ans, r - l + 1);
                curr = curr - nums[l];
                l++;
            }
        }
        if(ans ==  INT_MAX){
            return 0;
        }
        return ans;
    }
};