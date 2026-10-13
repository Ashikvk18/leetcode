class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>hmap;
        unordered_set<int>hset;
        for(auto& x : arr){
            hmap[x]++;
        }
        for(auto& x : hmap){
            if(hset.contains(x.second)){
                return false;
            }
            hset.insert(x.second);
        }
        return true;
    }
};