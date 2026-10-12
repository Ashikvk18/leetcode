class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>hset;
        int ans = 0;\
        for(auto& x : jewels){
            hset.insert(x);
        }
        for(auto& x : stones){
            if(hset.contains(x)){
                ans++;
            }
        }
        return ans;
    }
};