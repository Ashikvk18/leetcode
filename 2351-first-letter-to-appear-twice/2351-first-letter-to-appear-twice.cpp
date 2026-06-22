class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> hset;
        for(auto& c : s){
            if(hset.contains(c)){
                return c;
            }
            else{
                hset.insert(c);
            }
        }
        return ' ';
    }
};