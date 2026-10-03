class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>hmap;
        unordered_set<int>hset;
        for(auto& x : s){
            hmap[x]++;
        }
        for(auto& x : hmap){
            hset.insert(x.second);
        }
        return hset.size() == 1 ? true : false;
    }
};