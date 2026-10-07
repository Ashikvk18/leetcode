class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        map<vector<int>, int>hmap;
        for(int i = 0; i < grid.size(); i++){
            hmap[grid[i]]++;
        }
        for(int j = 0; j < grid[0].size(); j++){
            vector<int> v;
            for(int i = 0; i < grid.size(); i++){
                v.push_back(grid[i][j]);
            }
            ans += hmap[v];
        }
    return ans;
    }
};