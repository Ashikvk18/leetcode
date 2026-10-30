class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int ans = 0, i = 0, j = 0;
        while(j < nums.size()){
            hmap[nums[j]]++;
            while(i <= j && hmap[nums[j]] > k){
                hmap[nums[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};