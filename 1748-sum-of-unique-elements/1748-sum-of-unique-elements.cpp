class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> hmap;
        int total = 0;
        for(auto& x : nums){
            hmap[x]++;
        }
        for(auto& x : hmap){
            if(x.second == 1){
                total += x.first;
            }
        }
        return total;
    }
};