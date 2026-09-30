class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> hmap;
        for(auto x : text){
            hmap[x]++;
        }
        return min({hmap['b'],hmap['a'],hmap['l']/2,hmap['o']/2,hmap['n']});
    }
};