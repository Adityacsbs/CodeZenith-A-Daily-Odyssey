class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
         unordered_map<int,int> fre;
         int n = nums.size();

        for(int element:nums){
            if(fre.find(element) == fre.end()){
                fre[element]=1;
            }else{
                fre[element]++;
            }
        }
        int maxi = 0;
        for(auto it:fre){
          maxi = max(maxi,it.second);
        }

        vector<vector<int>> okk(maxi);

        for(int i=0;i<n;i++){
          okk[fre[nums[i]]-1].push_back(nums[i]);
          fre[nums[i]]--;
        }

       return okk; 
    }
};
