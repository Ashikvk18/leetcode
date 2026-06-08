class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr {0uz};
        int ans {0uz};
        int j {0uz};
        for(int i {0uz}; i<nums.size(); i++){
            if(nums[i]==0){
                curr++;
            }
            while(curr>0){
                if(nums[j]==0){
                    curr--;
                }
             j++;
            }
            ans= max(ans,i-j+1);
        }
        return ans;
    }
};