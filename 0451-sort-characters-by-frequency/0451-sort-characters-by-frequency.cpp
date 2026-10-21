class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>hmap;
        for(auto& x : s){
            hmap[x]++;
        }
        vector<pair<char, int>> v;
        for(auto& x : hmap){
            v.push_back({x.first, x.second});
        }
        sort(v.begin(), v.end(), [&](pair<char, int>& a, pair<char, int>& b){
            return a.second > b.second;
        });
        string ans = "";
        for(auto& x : v){
            ans.append(x.second, x.first);
        }
        return ans;
    }
};