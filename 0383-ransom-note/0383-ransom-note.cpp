class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>hset1;
        unordered_map<char, int>hset2;
        for(auto& x : ransomNote){
            hset1[x]++;
        }
        for(auto& x : magazine){
            hset2[x]++;
        }
        for(auto& x : hset1){
            if(hset2[x.first] < x.second){
                return false;
            }
        }
        return true;
    }
};