class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        //  sort(nums.begin(), nums.end());
        vector<int> ok;
        for (int i = 0; i < n; i++) {
            ans.push_back(i + 1);
        }

        unordered_set<int> set1(ans.begin(), ans.end());

        unordered_set<int> set2(nums.begin(), nums.end());

        for (const auto& elements : set1) {
            if (set2.find(elements) == set2.end()) {
                ok.push_back(elements);
            }
        }
        return ok;
    }
};
