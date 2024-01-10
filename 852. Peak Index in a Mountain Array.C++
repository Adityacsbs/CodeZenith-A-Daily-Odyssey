class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        int i =0;int j=i+1;
        while( j<n){
            if(arr[i]<arr[j]){
                i++;
                j++;
            }
            else if(arr[i]>arr[j]){
                return i;
            }
        }
        return 0;
    }
};
