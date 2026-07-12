class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(),-1);
        long long sum = 0;
        int window = 2*k+1;
        if(k<0){
            return ans;
        }
        if(k==0){
            return nums;
        }
        if(window>nums.size()){
            return ans;
        }
        for(int i = 0; i < window; i++){
            sum += nums[i];
        }
        ans[k]=sum/window;
        for(int i = window; i < nums.size(); i++){
            sum = sum + nums[i] - nums[i-window];
            ans[i-k]=sum/window;
        }
        return ans;
    }
};