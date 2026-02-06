class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rs(nums.size());
        rs[0] = nums[0];
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            rs[i] = sum;
        }
        return rs;
    }
};
