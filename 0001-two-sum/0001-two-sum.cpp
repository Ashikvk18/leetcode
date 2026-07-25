class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for(int i = 0; i < nums.size(); i++){
            int com = target - nums[i];
            if(hmap.contains(com)){
                return {hmap[com], i};
            }
            else{
                hmap[nums[i]] = i;
            }
        }
        return {};
    }
};