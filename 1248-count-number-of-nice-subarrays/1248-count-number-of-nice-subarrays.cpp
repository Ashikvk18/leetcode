class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int>hmap;
        hmap[0]=1;
        int curr = 0;
        int ans = 0;
        for(auto x : nums){
            curr += x % 2;
            ans += hmap[curr-k];
            hmap[curr]++;
        }
        return ans;
    }
};