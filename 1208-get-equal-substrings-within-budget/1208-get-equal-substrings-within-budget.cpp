class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int r = 0;
        int cost = 0;
        int ans = 0;
        for(; r < s.size(); r++){
            cost+=abs(s[r]-t[r]);
            while(cost>maxCost){
                cost-=abs(s[l]-t[l]);
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};