class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int>map;
        int ans = INT_MAX;
        for(int i = 0; i < cards.size(); i++){
            if(map.contains(cards[i])){
                ans = min(ans, i - map[cards[i]] + 1);
            }
            map[cards[i]] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};