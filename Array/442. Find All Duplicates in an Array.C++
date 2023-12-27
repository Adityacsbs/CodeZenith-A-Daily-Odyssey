class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> ans;

        int count = 1;  // Move the initialization outside the loop

        for (int i = 0; i < n - 1; ++i) {  // Update loop condition
            if (nums[i] == nums[i + 1]) {
                count++;
            } else {
                if (count > 1) {
                    ans.push_back(nums[i]);
                }
                count = 1;  // Reset count for the next element
            }
        }

        // Check the last element after the loop
        if (count > 1) {
            ans.push_back(nums[n - 1]);
        }

        return ans;
    }
};
