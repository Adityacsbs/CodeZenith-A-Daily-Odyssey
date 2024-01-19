class Solution {
public:
    int pivotInteger(int n) {

        int mid  = (n+1)/2;

        int tsum  =  n*(n+1)/2;

        int l,r;
        int lb = 0;
        int ub = n;

        while(lb<=ub){
            l = mid*(mid-1)/2;
            r = tsum - mid - l;

            if(l==r){
                return mid;
            }
            if(l>r){
              ub = mid -1;
            }
            if(r>l){
                lb = mid + 1;
            }
            mid =  (ub  + lb)/2;
        }
      return -1;  
    }
};
