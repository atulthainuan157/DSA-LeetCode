class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        int count = 0;
        long long planetMass = mass;
        for (int i = 0; i < n; i++) {
            if (planetMass >= asteroids[i]) {
                planetMass += asteroids[i];
                asteroids[i] = 0;
            } else {
                count++;
            }
        }
        while (count > 0) {
            int temp = 0;
            for (int i = 0; i < n; i++) {
                if (planetMass >= asteroids[i]) {
                    planetMass += asteroids[i];
                    asteroids[i] = 0;
                } else {
                    temp++;
                }
            }
            if (count == temp) {
                return false;
            }
            count = temp;
        }
        return true;
    }
};