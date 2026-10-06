class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>hmap;
        int ans = -1;
        for(auto& x : nums){
            int d = total(x);
            if(hmap.contains(d)){
                ans = max(ans, x + hmap[d]);
            }
            hmap[d] = max(hmap[d], x);
        }
        return ans;
    }
    int total(int num){
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num = num / 10;
        }
        return sum;
    }
};