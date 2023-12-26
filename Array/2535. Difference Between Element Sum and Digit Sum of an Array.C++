class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
         sum = sum + nums[i];
        }
        int sum2=0;
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            while(num>0){
             int j = num%10;
             num= num/10;
             sum2=sum2+j;
            }
        }
        int abs2 = abs(sum-sum2);

        return abs2;
    }
};
