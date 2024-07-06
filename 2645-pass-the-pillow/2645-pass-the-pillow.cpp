class Solution {
public:
    int passThePillow(int n, int time) {
        
        int cyc = time/(n-1);

        int pos = time%(n-1);

        if(cyc%2==0){
            return pos+1;
        }else{
            return n-pos;
        }
    }
};