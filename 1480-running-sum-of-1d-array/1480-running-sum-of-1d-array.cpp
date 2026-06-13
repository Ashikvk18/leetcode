class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans = {nums[0]};
        for(int i = 1; i < nums.size(); i++){
            ans.push_back(ans[ans.size()-1]+nums[i]);
        }
        return ans;
    }
};