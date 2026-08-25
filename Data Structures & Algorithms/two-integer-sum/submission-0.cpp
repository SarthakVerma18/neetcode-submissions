class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // maps value → index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (m.count(complement)) {
                return {min(i, m[complement]), max(i, m[complement])};
            }
            m[nums[i]] = i;
        }
        return {}; // no pair found
    }
};
