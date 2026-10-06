class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int>h;
        int an = INT_MAX;
        for(int i = 0; i < cards.size(); i++){
            if(h.contains(cards[i])){
                an = min(an, i - h[cards[i]] + 1);
            }
            h[cards[i]] = i;
        }
        return an == INT_MAX ? -1 : an;
    }
};