class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(),-1);
        vector<long>prefix(nums.size()+1);
        int window= 2*k+1;
        if(k<=0){
            return nums;
        }
        if(window>nums.size()){
            return ans;
        }
        prefix[0]=0;
        for(int i = 0; i < nums.size(); i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        for(int i = k; i < nums.size()-k; i++){
            long right = i+k;
            long left = i-k;
            long sum=prefix[right + 1]-prefix[left];
            int avg = sum/window;
            ans[i]=avg;
        }
        return ans;
    }
};