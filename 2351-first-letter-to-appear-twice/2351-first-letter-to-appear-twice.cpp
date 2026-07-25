class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> hset;
        for(int i = 0; i < s.size(); i++){
            if(hset.contains(s[i])){
                return s[i];
            }
            else{
                hset.insert(s[i]);
            }
        }
        return ' ';
    }
};