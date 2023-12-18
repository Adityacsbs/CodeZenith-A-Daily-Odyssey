class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int a = items.size();

        int sex = 0;

        for(int i=0;i<a;i++){
            if(ruleKey=="type" && ruleValue==items[i][0]){
                sex++;
            }
            else if(ruleKey=="color" && ruleValue==items[i][1]){
                sex++;
            }
            else if(ruleKey=="name" && ruleValue==items[i][2]){
                sex++;
            }
        }
        return sex;
    }   
};
