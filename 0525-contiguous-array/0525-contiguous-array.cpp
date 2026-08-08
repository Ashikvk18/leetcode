class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> hmap;
        hmap[0]=-1;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                sum = sum -1;
            } else if( nums[i] == 1){
                sum = sum + 1;
            }
            if(hmap.contains(sum)){
                ans =max(ans,i - hmap[sum]);
            }
            else{
                hmap[sum]=i;
            }
        }
        return ans;
    }
};