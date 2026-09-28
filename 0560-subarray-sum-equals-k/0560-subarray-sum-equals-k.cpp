class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int curr = 0;
        int ans = 0;
        hmap[0] = 1;
        for(auto x : nums){
           curr += x;
           ans += hmap[curr -k];
           hmap[curr]++; 
        }
        return ans;
    }
};