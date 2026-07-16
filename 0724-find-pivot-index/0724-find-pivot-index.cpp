class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix = {nums[0]};
        for(int i = 1; i < nums.size(); i++){
            prefix.push_back(prefix.back()+nums[i]);
        }
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            int right = prefix.back()-left-nums[i];
            if(left==right){
                return i;
            }
            left +=nums[i];
        }
        return -1;
    }
};