class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n= bank.size();

        int prev=0;
        for(int i=0;i<bank[0].size();i++){
            if(bank[0][i]=='1'){
                prev++;
            }
        }
        int current=0;
        int ans =0;
        for(int i=1;i<n;i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    current++;
                }
            }
            if(current!=0){
                ans+=prev*current;
                prev=current;
                current=0;
            }
        }
     return ans;   
    }
};
