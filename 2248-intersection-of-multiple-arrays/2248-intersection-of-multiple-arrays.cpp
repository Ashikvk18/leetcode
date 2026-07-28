class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int,int>hmap;
        for(auto x : nums){
            for(auto y : x){
                hmap[y]++;
            }
        }
        for(auto x : hmap){
            if(x.second == nums.size()){
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};