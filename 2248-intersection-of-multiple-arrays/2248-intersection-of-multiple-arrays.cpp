class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> hmap;
        vector<int>ans;
        for(vector<int>arr : nums){
            for(auto & x : arr){
                hmap[x]++;
            }
        }
        for(auto y : hmap){
            if(y.second == nums.size()){
                ans.push_back(y.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};