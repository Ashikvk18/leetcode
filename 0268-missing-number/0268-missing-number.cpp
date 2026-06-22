class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // unordered_set<int>hset(nums.begin(),nums.end());
    int n = nums.size();
    int total= n*(n+1)/2;
    int sum = 0;
    // for(int i = 0; i<=nums.size(); i++){
    //    if(!hset.contains(i)){
    //     return i;
    //    }
    // }
    // return -1;
    // } Better solution is the math one as no extra space needed
    for(int i = 0; i<n;i++){
        sum +=nums[i];
    }
    return total - sum;
    }
};