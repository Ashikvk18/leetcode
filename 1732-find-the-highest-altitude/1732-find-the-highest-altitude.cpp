class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefix={0};
        int ans = 0;
        for(int i = 0; i < gain.size(); i++){
            prefix.push_back(prefix.back()+gain[i]);
            ans = max(ans, prefix.back());
        }
        return ans;
    }
};