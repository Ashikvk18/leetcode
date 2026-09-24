class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int curr = 0;
        for(auto x : nums){
            curr += x;
        }
        return total - curr;
    }
};