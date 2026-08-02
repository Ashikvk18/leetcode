class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int>h1;
        unordered_map<char, int>h2;
        int res = INT_MAX;
        for(auto x : s){
            h1[x]++;
        }
        for(auto x : target){
            h2[x]++;
        }
        for(auto x : target ){
            res = min(res, h1[x]/h2[x]);
        }
        return res;
    }
};