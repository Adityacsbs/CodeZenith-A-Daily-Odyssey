class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>countmap;
        vector<int>ans;
        for(int num:nums1){
            countmap[num]++;
        }

        for(int num:nums2){
           if( countmap[num]>0){
            ans.push_back(num);
            countmap[num]--;
           }
        }
        return ans ;
    }
};