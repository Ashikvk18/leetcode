class Solution {
public:
    int findLucky(vector<int>& arr) {
        int l = -1;
        unordered_map<int, int>hmap;
        for(auto& x : arr){
            hmap[x]++;
        }
        for(auto& x : hmap){
            if(x.first == x.second){
                l = max(l, x.first);
            }
        }
        return l;
    }
};