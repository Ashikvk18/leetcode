class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>hmap;
        int ans = -1;
        for(auto x : nums){
            int d = dsum(x);
            if(hmap.contains(d)){
                ans = max(ans, x + hmap[d]);
            }
            hmap[d] = max(hmap[d], x);
        }
        return ans;
    }
    int dsum(int x){
        int sum = 0;
        while(x > 0){
            sum += x % 10;
            x = x / 10;
        }
        return sum;
    }
};