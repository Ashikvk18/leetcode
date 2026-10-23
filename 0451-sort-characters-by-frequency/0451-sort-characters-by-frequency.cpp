class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>bobin;
        vector<pair<char, int>>bangu;
        string bukhari = "";
        for(auto& x : s){
            bobin[x]++;
        }
        for(auto& x : bobin){
            bangu.push_back({x.first, x.second});
        }
        sort(bangu.begin(), bangu.end(), [&](pair<char, int>& a, pair<char, int>& b){
            return a.second > b.second;
        });
        for(auto& x : bangu){
            bukhari.append(x.second, x.first);
        }
        return bukhari;
    }
};