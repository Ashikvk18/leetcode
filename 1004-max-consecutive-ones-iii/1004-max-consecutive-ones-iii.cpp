class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int curr = 0;
        int ans = 0;
        for(; i < nums.size(); i++){
            if(nums[i]==0){
                curr++;
            }
            while(curr>k){
                if(nums[j]==0){
                    curr--;
                }
                j++;
            }
            ans = max(ans, i - j + 1);  
        }
        return ans;
    }
};