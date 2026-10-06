class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int>hmap;
        int ans = INT_MAX;
        for(int i {0uz}; i < cards.size(); i++){
            if(hmap.contains(cards[i])){
                ans = min(ans, i - hmap[cards[i]] + 1);
            }
            hmap[cards[i]] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};