class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int curr = 0;
        int ans = 0;
        hmap[0] = 1;
        for(auto& y : nums){
            curr += y % 2;
            ans += hmap[curr - k];
            hmap[curr]++;
        }
        return ans;
    }
};