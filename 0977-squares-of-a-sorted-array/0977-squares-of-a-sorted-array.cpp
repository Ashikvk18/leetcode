class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> x(nums.size());
       int l = 0;
       int r = nums.size() - 1;
       int s;
       for (int i = nums.size()-1; i>=0; i--){
        if(abs(nums[l])>abs(nums[r])){
            s = nums[l];
            l++;
        }else{
            s= nums[r];
            r--;
        }
        x[i]=s*s;
       }
       return x;
    }
};