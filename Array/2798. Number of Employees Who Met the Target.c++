class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int a = hours.size();

        int b = 0;

        for(int i=0;i<a;i++){
            if(hours[i]>=target){
                b++;
            }
        }
        return b;
    }
};
