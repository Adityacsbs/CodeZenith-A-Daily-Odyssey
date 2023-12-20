class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        sort(prices.begin(),prices.end());
int a,aa;
        a = prices[0]+prices[1];

        if(money>=a){

            aa= money-a;

        }
        else{
            return money;
        }
return aa;
    }
};
