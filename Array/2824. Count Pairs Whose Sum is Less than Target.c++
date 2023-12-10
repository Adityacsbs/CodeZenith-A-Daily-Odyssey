class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int a = nums.size();

        vector<int> k;
            int count=0;

        for(int i=0;i<a;i++){
            

            for(int j=i+1;j<a;j++){
                int sex = nums[i]+nums[j];
                if(target>sex){
                    count++;
                }
            }

        }
return count;
        
    }
};
