//Question link :- https://leetcode.com/problems/repeated-substring-pattern/description/

class Solution {
public:

    bool repeatedSubstringPattern(string s) {
    int a = s.length();

    for(int i = 1; i<=a/2;i++){
        if(a%i==0){
            string empty ="";
            int repeatation = a/i;

            for(int j=0; j<repeatation;j++){
                empty += s.substr(0, i);
                //edited
            }

            if(s==empty){
                return true;
            }
        }
    }
    return false;
        
    }
};



