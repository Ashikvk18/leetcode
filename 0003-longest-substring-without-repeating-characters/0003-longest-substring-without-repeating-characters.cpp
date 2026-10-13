class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>hmap;
        int ans = 0;
        for(int i = 0, j = 0; j < s.size(); j++){
            if(hmap.contains(s[j])){
                i = max(hmap[s[j]], i);
            }
            hmap[s[j]] = j + 1;
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};