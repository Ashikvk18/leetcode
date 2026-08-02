class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curr = 0;
        unordered_map<int, int>hmap;
        hmap[0]=1;
        int ans=0;
        for(auto x : nums){
            curr += x;
            ans += hmap[curr-k];
            hmap[curr]++;
            }
            return ans;
    }
};