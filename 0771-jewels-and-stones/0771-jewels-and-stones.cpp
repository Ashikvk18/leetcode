class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> h1;
        unordered_map<char, int> h2;
        int ans = 0;
        for(auto& x : jewels){
            h1[x]++;
        }
        for(auto& x : stones){
            h2[x]++;
        }
        for(auto& x : h2){
            if(h1.contains(x.first)){
                ans += x.second;
            }
        }
        return ans;
    }
};