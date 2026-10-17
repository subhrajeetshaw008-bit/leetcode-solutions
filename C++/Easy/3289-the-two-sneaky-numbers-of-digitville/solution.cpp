class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int count[100] = {0};
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]] = count[nums[i]] + 1;
            if (count[nums[i]] == 2) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};