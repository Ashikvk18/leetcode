class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long>prefix = {nums[0]};
        for(int i = 1; i < nums.size(); i++){
            prefix.push_back(nums[i]+prefix[prefix.size()-1]);
        }
        int ans = 0;
        for(int i = 0; i < nums.size()-1; i++){
            long left = prefix[i];
            long right = prefix[prefix.size()-1]-prefix[i];
            if(left>=right){
                ans++;
            }
        }
        return ans;
    }
};