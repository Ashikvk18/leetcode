class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hmap;
        for(int i {0uz}; i < nums.size(); i++){
            int comp = target - nums[i];
            if(hmap.contains(comp)){
                return {hmap[comp], i};
            }
            hmap[nums[i]] = i;
        }
        return {};
    }
};