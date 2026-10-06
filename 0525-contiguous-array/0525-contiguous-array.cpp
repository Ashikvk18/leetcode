class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int>hmap;
        hmap[0] == -1;
        int count = 0;
        int ans = 0;
        for(int i {0uz}; i < nums.size(); i++){
            if(nums[i] == 0){
                count = count - 1;
            } else {
                count = count + 1;
            }
            if(hmap.contains(count)){
                ans = max(ans, i - hmap[count]);
            }
            hmap[count] = i;
        }
        return ans;
    }
};