class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<long int> total={nums[0]};
        for( int i = 1; i < nums.size(); i++){
            total.push_back(total.back()+nums[i]);
        }
        long left = 0;
        for(int i = 0; i < nums.size(); i++){
            long right = total.back()-left - nums[i];
            if(left == right){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};