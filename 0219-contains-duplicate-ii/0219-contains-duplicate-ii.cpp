class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];

            if (map.contains(current)) {
                int previousIndex = map[current];

                if (i - previousIndex <= k) {
                    return true;
                }
            }

            map[current] = i;
        }

        return false;
    }
};