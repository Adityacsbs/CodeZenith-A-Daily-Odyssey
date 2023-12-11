class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
     //   int a = 100/n;
        vector<int> sex;
        
        int maxIndex = 0;

        for(int i = 0; i < n; i++) {
            int count = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            
            sex.push_back(count);
            
            
            int maxValue = sex[0];
            int h = sex.size();
            for(int i=1;i<h;i++){
                if(sex[i]>maxValue){
                    maxValue = sex[i];
                    maxIndex = i;
                }
            }

          /*  int m = count * a;
            if(m >= 25) {
               // sex.push_back(arr[i]);
            }*/
        }
    
    return arr[maxIndex];
        
    }
};
