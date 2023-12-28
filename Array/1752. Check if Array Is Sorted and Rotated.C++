class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        vector<int> xyz(nums);
        sort(xyz.begin(), xyz.end());

        for (int i = 0; i < n; i++) {

            vector<int> rotatedArray(xyz.begin() + i, xyz.end());
            rotatedArray.insert(rotatedArray.end(), xyz.begin(), xyz.begin() + i);
            if (rotatedArray == nums) {
                return true;
            }
        }

        return false;
    }
};
