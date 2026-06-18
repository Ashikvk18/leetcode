class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s(nums.begin(),nums.end());
       int maxR = 0;
       for(auto x : s){
        if(!s.contains(x-1)){
            int current = x;
            int streak = 1;
            while(s.contains(current+1)){
                current++;
                streak++;
            }
            maxR=max(maxR,streak);
        }
       }
       return maxR; 
    }
};