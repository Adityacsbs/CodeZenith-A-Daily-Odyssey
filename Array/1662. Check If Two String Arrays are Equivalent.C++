class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        string a ="";
        string b ="";

        for(int i=0;i<n1;i++){
            a = a + word1[i];
        }
        
        for(int i=0;i<n2;i++){
            b = b + word2[i];
        }

        if(a==b){
            return true;
        }
        else{
            return false;
        }
    }
};
