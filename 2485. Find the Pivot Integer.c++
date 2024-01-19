class Solution {
public:
    int pivotInteger(int n) {
        // Declare an array to store the sum of integers
        int sum[n+1]; // n+1 to accommodate indices from 0 to n

        // Calculate the cumulative sum of integers from 1 to n
        sum[0] = 0;
        for(int i = 1; i <= n; i++) {
           sum[i] = sum[i-1] + i;
        }

        int end = 0;

        // Iterate from n to 1, updating the running sum
        for(int i = n; i > 0; i--) {
            end = end + i;

            // Check if the running sum equals the total sum
            if(end == sum[i]) {
                return i;
            }
        }

        // If no pivot integer is found, return -1
        return -1;
    }
};
