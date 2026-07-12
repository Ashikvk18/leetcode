class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>prefix={nums[0]};
        for(int i = 1; i < nums.size(); i++){
            prefix.push_back(prefix.back()+nums[i]);
        }
        long ans = 0;
        for(int i = 0; i < nums.size()-1; i++){
            long left = prefix[i];
            long right = prefix.back()-prefix[i];
            if(left>=right){
                ans++;
            }
        }
        return ans;
    }
};