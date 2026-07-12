class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<long long>prefix={nums[0]};
        for(int i = 1; i < nums.size(); i++){
            prefix.push_back(prefix.back()+nums[i]);
        }
        long long x = 0;
        for(auto& y : prefix){
            x = min(x,y);
        }
        return 1-x;
    }
};