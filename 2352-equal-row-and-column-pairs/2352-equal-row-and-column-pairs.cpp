class Solution {
public:
    string convertToKey(vector<int>& arr) {
        string s = "";
        for (int num: arr) {
            s += to_string(num) + ",";
        }
        
        return s;
    }
    
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> dic;
        for (vector<int>& row: grid) {
            dic[convertToKey(row)]++;
        }

        unordered_map<string, int> dic2;
        for (int col = 0; col < grid[0].size(); col++) {
            vector<int> currentCol;
            for (int row = 0; row < grid.size(); row++) {
                currentCol.push_back(grid[row][col]);
            }
            
            dic2[convertToKey(currentCol)]++;
        }
        
        int ans = 0;
        for (auto [arr, val]: dic) {
            ans += val * dic2[arr];
        }
        
        return ans;
    }
};