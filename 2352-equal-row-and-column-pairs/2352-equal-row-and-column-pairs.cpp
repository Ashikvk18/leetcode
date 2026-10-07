class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int>hmap;
        int ans = 0;
        for(auto& x : grid){
            hmap[x]++;
        }
        for(auto i {0uz}; i < grid[0].size(); i++){
            vector<int>v;
            for(auto j {0uz}; j < grid.size(); j++){
                v.push_back(grid[j][i]);
            }
            ans += hmap[v];
        }
        return ans;
    }
};