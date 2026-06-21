class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix={nums[0]};
        for(int i = 1; i < nums.size(); i++){
            prefix.push_back(nums[i]+prefix.back());
        }
        for(int i = 0; i < nums.size(); i++){
            int left = 0;
            if(i>0){
                 left = prefix[i-1];
            }
            int right = prefix.back()-prefix[i];
            if(left==right){
                return i;
            }
        }
        return -1;
    }
};