class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int curr = 0;
        int pre = 0;
        for(auto x: nums){
            curr += x;
            pre = min(pre,curr);
        }
        return 1-pre;
    }
};