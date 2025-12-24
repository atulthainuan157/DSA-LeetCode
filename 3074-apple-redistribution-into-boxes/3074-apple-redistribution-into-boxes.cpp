class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApple = 0, totalCapacity = 0;
        for (int i = 0; i < apple.size(); i++) {
            totalApple += apple[i];
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        for (int i = 0; i < capacity.size(); i++) {
            totalCapacity += capacity[i];
            if (totalApple <= totalCapacity)
                return i + 1;
        }
        return -1;
    }
};