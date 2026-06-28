class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int ans = 0;
        int curr = 0;
        hmap[0]=1;
        for( auto num : nums){
            curr +=num % 2;
            ans+=hmap[curr-k];
            hmap[curr]++;
        }
        return ans;
    }
};