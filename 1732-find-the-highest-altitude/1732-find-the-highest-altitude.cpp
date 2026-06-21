class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int> prefix = {0};
       int ans = 0;
       for(int i = 0; i < gain.size(); i++){
        prefix.push_back(gain[i]+prefix.back());
        ans = max(ans,prefix.back());
       } 
       return ans;
    }
};