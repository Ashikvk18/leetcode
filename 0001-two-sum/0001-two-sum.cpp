class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for(int i = 0; i < nums.size(); i++){
            int curr = nums[i];
            int compliment = target- curr;
            if(hmap.contains(compliment)){
                return {hmap[compliment], i};
            }
            hmap[curr] = i;
        }
        return {};
    }
};