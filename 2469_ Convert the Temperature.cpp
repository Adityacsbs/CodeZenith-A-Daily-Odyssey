//problem link = https://leetcode.com/problems/convert-the-temperature/description/
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k = celsius + 273.15;
        double f = celsius *1.80 +32; 

        vector<double>tem;
        tem.push_back(k);
        tem.push_back(f);

        return tem;
        
    }
};
