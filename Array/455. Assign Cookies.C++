class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m= s.size();
 int count =0;
        int i =0 ,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                count=count+1;
                i+=1;
            }
                j+=1;
        }
        return count;
    }
};
