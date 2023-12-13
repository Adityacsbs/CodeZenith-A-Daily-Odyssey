class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int n = sentences.size();

        int ans =0;

        for(int i=0;i<n;i++){
        int max =0;
         
         int q = sentences[i].size();

         for(int j =0;j<q;j++){
             if(sentences[i][j] == ' '){
                 max++;
             }
         }
         if(max>ans){
             ans = max;
         }
        }

        ans = ans + 1;
        return ans;
        
    }
};
