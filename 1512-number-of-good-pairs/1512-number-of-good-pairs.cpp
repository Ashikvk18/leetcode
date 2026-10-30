class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>hmap;
        int total = 0;
        for(auto& x : nums){
            hmap[x]++;
        }
        for(auto& x : hmap){
            total += x.second * (x.second - 1) / 2;
        }
        return total;
    }
};