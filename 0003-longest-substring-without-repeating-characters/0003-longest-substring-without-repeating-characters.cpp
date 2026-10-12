class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>hmap;
        int ans = 0;
        for(int i = 0, j = 0; j < s.size(); j++){
            if(hmap[s[j]] > 0){
                i = max(hmap[s[j]], i);
            }
            ans = max(ans, j - i + 1);
            hmap[s[j]] = j + 1;
        }
        return ans;
    }
};