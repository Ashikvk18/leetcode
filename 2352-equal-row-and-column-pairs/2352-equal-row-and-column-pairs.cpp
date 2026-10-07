class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int>map;
        int ans = 0;
        for(auto& x : grid){
            map[x]++;
        }
        for(auto j {0uz}; j < grid[0].size(); j++){
            vector<int> vec;
            for(auto i {0uz}; i < grid.size(); i++){
                vec.push_back(grid[i][j]);
            }
            ans += map[vec];
        }
        return ans;
    }
};