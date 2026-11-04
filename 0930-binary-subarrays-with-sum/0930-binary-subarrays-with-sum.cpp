class Solution {
public:
    int Max(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int i = 0, j = 0, ans = 0, sum = 0;
        while(j < nums.size()){
            sum += nums[j];
            while(sum > goal){
                sum -= nums[i];
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return Max(nums, goal) - Max(nums, goal - 1);
    }
};