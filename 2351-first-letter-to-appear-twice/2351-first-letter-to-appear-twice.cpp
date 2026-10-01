class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>set;
        for(auto& x : s){
            if(set.contains(x)){
                return x;
            }
            set.insert(x);
        }
        return ' ';
    }
};