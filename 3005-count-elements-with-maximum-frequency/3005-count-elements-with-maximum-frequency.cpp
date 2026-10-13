class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>hmap;
        int f = 0;
        int total = 0;
        for(auto& x : nums){
            hmap[x]++;
        }
        for(auto& x : hmap){
            if(x.second > f){
                f = x.second;
            }
        }
        for(auto& x : hmap){
            if(x.second == f){
                total += x.second;
            }
        }
        return total;
    }
};