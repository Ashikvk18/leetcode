class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int>map;
        int ans = 0;
        for(auto& x : grid){
            map[x]++;
        }
        for(auto i {0uz}; i < grid[0].size(); i++){
            vector<int>v;
            for(auto j {0uz}; j < grid.size(); j++){
                v.push_back(grid[j][i]);
            }
            ans += map[v];
        }
        return ans;
    }
};