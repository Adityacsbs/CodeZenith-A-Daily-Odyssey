class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int a = nums.size();

        vector<int> ass;
        int sum = 0;

        for(int i=0;i<a;i++){
          
          sum = sum + nums[i];

          ass.push_back(sum);
        }
        
        return ass;
    }
};
