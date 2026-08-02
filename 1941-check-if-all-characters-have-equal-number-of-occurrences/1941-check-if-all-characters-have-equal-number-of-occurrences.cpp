class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>hmap;
        unordered_set<int>ans;
        for(auto x : s){
            hmap[x]++;
        }
        for(auto x : hmap){
            ans.insert(x.second);
        }
        return ans.size() == 1;
    }
};