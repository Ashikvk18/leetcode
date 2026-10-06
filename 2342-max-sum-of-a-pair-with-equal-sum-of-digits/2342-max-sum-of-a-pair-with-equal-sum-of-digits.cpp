class Solution {
public:
    int t(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>hmap;
        int ans = -1;
        for(auto& x : nums){
            int d = t(x);
            if(hmap.contains(d)){
                ans = max(ans, x + hmap[d]);
            }
            hmap[d] = max(hmap[d], x);
        }
        return ans;
    }
};