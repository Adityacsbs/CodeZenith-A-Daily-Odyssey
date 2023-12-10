class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int a = nums.size();

        vector <int> k;

        for(int i=0;i<a;i++){
            int c =0;
            for(int j=0;j<a;j++){
                if(nums[i]>nums[j]){
                    c++;
                }
            }
                k.push_back(c);
        } 
    
    return k;
    }

};
