class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int>hmap;
        int ans = INT_MAX;
        for(int i {0uz}; i < cards.size(); i++){
            if(hmap.contains(cards[i])){
                int length = i - hmap[cards[i]]+1;
                ans = min(ans, length);
            }
            hmap[cards[i]] = i;
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};