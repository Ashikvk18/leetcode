class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>set;
        for(auto& x : paths){
            set.insert(x[1]);
        }
        for(auto& x : paths){
            if(set.contains(x[0])){
                set.erase(x[0]);
            }
        }
        for(auto& x : set){
            return x;
        }
        return "";
    }
};