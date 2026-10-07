class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>hset;
        for(auto& x : paths){
            hset.insert(x[1]);
        }
        for(auto& y : paths){
            if(hset.contains(y[0])){
                hset.erase(y[0]);
            }
        }
        for(auto& z : hset){
            return z;
        }
        return "";
    }
};