class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>hset;
        for(auto& x : paths){
            hset.insert(x[1]);
        }
        for(auto& x : paths){
            if(hset.contains(x[0])){
                hset.erase(x[0]);
            }
        }
        for(auto& x : hset){
            return x;
        }
        return "";
    }
};