class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curr = 0;
        unordered_map<int, int>hmap;
        hmap[0]=1;
        int ans=0;
        for(auto x : nums){
            curr += x;
            hmap[curr]++;
            ans += hmap[curr-k];
            }
            return ans;
    }
};