class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int>hset;
        vector<int> ans;
        for(auto x : nums){
            for(auto y : x){
                hset[y]++;
            }
        }
        for(auto x : hset){
            if(x.second == nums.size()){
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};