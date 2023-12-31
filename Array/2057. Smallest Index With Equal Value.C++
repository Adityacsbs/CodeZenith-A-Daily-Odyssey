class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
         int h;
        for(int i=0;i<n;i++){
         h=0;
         h=i%10;
         if(h==nums[i]){
             return i;
         }
        }

       return -1; 
    }
};
