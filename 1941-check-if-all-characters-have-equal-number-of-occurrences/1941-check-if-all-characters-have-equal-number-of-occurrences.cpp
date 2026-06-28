class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>hmap;
        unordered_set<int>ans;
        for(auto x : s){
            hmap[x]++;
        }
        for(auto y : hmap){
            ans.insert(y.second);
        }
        return ans.size() == 1;
    }
};