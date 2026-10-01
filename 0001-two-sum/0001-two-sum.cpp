class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for(int i {0uz}; i < nums.size(); i++){
            int curr = nums[i];
            int comp = target - curr;
            if(hmap.contains(comp)){
                return {hmap[comp], i};
            }
            hmap[curr] = i;
        }
        return {};
    }
};