class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int a=accounts.size();

        int b =0;

        for(int i=0;i<a;i++){
            int c = accounts[i].size();
            int d =0;
            for(int j=0;j<c;j++){
             d = d + accounts[i][j];
            }
            if(d>b){
                b=d;
            }
        }
        return b;
    }
};
