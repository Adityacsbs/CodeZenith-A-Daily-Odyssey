  class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int b= operations.size();
        int a =0;

        for(int i=0;i<b;i++){
            if(operations[i]=="--X" ||operations[i]=="X--"){
                a--;
            }
            else if(operations[i]=="X++" ||operations[i]=="++X"){
                a++;
            }
        }
    return a;
    }
};
