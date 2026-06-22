class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int comp = target - num;
            if(hmap.contains(comp)){
                return {hmap[comp],i};
            }
            hmap[num]=i;
        }
        return {-1,-1};
    }
};