class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int i = 0;
        int step = 0;
        int wat = capacity;

        while (i < n) {
            if (plants[i] <= wat) {
                wat -= plants[i];
                i++;
                step++;
            } else {
                wat = capacity;
                step += 2 * i;
            }
          //  step++;
        }

        return step ;  // Correcting the final step count
    }
};
