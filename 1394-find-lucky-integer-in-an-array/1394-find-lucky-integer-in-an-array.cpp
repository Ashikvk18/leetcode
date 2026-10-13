class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>hmap;
        vector<int> v;
        int l = -1;
        for(auto& x : arr){
            hmap[x]++;
        }
        for(auto& x : hmap){
            if(x.second == x.first){
                v.push_back(x.first);
            }
        }
        for(auto& x : v){
            if(x > l){
                l = x;
            }
        }
        return l;
    }
};