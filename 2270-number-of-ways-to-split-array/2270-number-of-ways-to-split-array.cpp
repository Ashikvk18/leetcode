class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        int ans = 0;
        long left = 0;
        for(int i = 0; i < nums.size()-1; i++){
            left +=nums[i];
            long right = total - left;
            if(left >= right){
                ans++;
            }
        }
        return ans;
    }
};