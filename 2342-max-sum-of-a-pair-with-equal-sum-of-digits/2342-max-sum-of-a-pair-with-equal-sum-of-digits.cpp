class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>>hmap;
        for(auto x : nums){
            int d = dsum(x);
            hmap[d].push_back(x);
        }
        int ans = -1;
        for(auto x : hmap){
            if(x.second.size() > 1){
                sort(x.second.begin(), x.second.end());
                int n = x.second.size();
                ans = max(ans, x.second[n-1] + x.second[n-2]);
            }
        }
        return ans;
        }
        int dsum(int n){
            int sum = 0;
            while(n>0){
                sum += n % 10;
                n = n / 10;
            }
            return sum;
    }
};