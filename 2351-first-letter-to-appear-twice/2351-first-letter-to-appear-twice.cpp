class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>hset;
        for(auto x : s){
            if(hset.contains(x)){
                return x;
            }
            hset.insert(x);
        }
        return s;
    }
};