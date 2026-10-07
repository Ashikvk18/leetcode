class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int>map;
        int ans = 0;
        for(auto& x : grid){
            map[x]++;
        }
        for(int j = 0; j < grid[0].size(); j++){
            vector<int>a;
            for(int i = 0; i < grid.size(); i++){
                a.push_back(grid[i][j]);
            }
            ans += map[a];
        }
        return ans;
    }
};