class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for( int i {0uz}; i < nums.size(); i++){
            int current = nums[i];
            int compliment = target - current;
            if(map.contains(compliment)){
                return {map[compliment],i};
            }
            else{
                map[current]=i;
            }
        }
        return {};       
    }
};
