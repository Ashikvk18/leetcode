class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        map[0] = -1;
        int ans = 0;
        int count = 0;
        for(int i {0uz}; i < nums.size(); i++){
            if(nums[i] == 0){
                count -= 1;
            }
            else {
                count += 1;
            }
            if(map.contains(count)){
                ans = max(ans, i - map[count]);
            }
            else {
                map[count] = i;
            }
        }
        return ans;
    }
};