class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>set;
        int ans = 0;
        for(auto& x : jewels){
            set.insert(x);
        }
        for(auto& x : stones){
            if(set.contains(x)){
                ans++;
            }
        }
        return ans;
    }
};