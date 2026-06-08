class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int r = 0;
        int l = 0;
        int curr = 1;
        int ans = 0;
        if(k<=1){
            return 0;
        }
        for(; r < nums.size(); r++){
            curr = curr * nums[r];
            while(curr>=k){
                curr = curr / nums[l];
                l++;
            }
            ans += r - l + 1; 
        }
        return ans;
    }
};