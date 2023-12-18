class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int n = nums.size();
        int a,b ;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i==0 ){
               a = nums[i]*nums[i+1]; 
            }
            else if( i==n-1){
                b = nums[i]*nums[i-1];
            }
            
        }

        int sexus = abs(a-b);

        return sexus;
    }
};
