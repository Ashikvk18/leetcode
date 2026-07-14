class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int r = 0;
        int curr = 0;
        int ans = 0;
        for(; r < s.size(); r++){
            curr+=abs(s[r]-t[r]);
            while(curr>maxCost){
                curr-=abs(s[l]-t[l]);
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};