class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int a = candies.size();

        vector<bool> b;
        for(int i=0;i<a;i++){
     int totalCandies = candies[i]+extraCandies;
            bool max = true;

            for(int j=0;j<a;j++){
                if(i!=j &&  totalCandies < candies[j]){
                    max=false;
                    break;
                }

            }
            b.push_back(max);
        }
        return b;

    }
};
