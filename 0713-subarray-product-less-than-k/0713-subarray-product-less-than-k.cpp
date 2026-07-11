class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<1){
            return 0;
        }
        int i = 0; int j = 0; int ans = 0; int curr = 1;
        for(; i < nums.size(); i++){
            curr *= nums[i];
            while(curr>=k){
                curr = curr / nums[j];
                j++;
            }
            ans += i - j + 1;
        }
        return ans;
    }
};