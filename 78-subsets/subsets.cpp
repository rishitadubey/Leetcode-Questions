class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        // store subsets;
        if (i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        // include nums[i]
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i + 1, allSubsets);

        // backtrack
        ans.pop_back();

        // exclude nums[i]
        getAllSubsets(nums, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};
