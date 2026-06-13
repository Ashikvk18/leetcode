class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long>p={nums[0]};
        for(int i = 1; i<nums.size();i++){
            p.push_back(p[p.size()-1]+nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < nums.size()-1; i++){
            long l = p[i];
            long r = p[p.size()-1]-p[i];
            if(l>=r){
                ans++;
            }
        }
        return ans;
    }
};