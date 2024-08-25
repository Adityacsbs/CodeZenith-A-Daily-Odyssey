class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;

        int left[n], right[n];
        left[0] = height[0];
        right[n-1] = height[n - 1];

        for (int i = 1; i < n; i++) {

            if (height[i] > left[i - 1]) {
                left[i] = height[i];
            } else {
                left[i] = left[i - 1];
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (height[i] > right[i + 1]) {
                right[i] = height[i];
            } else {
                right[i] = right[i + 1];
            }
        }
//int water = 0;
        for (int i = 1; i < n - 1; i++) {
            water += min(left[i], right[i]) - height[i];
        }

        return water;
    }
};