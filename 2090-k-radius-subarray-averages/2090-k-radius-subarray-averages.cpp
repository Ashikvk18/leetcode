class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(),-1);
        int window = 2*k+1;
        long windowsum = 0;
        if(k<=0){
            return nums;
        }
        if (window > nums.size()){
            return ans;
        }
        for(int i = 0; i<window; i++){
             windowsum += nums[i];
        }
        ans[k]=windowsum/window;
        for(int i = window; i < nums.size(); i++){
            windowsum = windowsum + nums[i] - nums[i-window];
            ans[i-k]=windowsum/window;
        }
        return ans;
    }
};