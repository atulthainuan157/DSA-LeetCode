class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int m = landStartTime.size();
        int n = waterStartTime.size();
        int ans = INT_MAX;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int finishLand = landStartTime[i] + landDuration[i];
                int startWater = max(finishLand, waterStartTime[j]);
                int finishWater = startWater + waterDuration[j];
                ans = min(ans, finishWater);

                int finishWater2 = waterStartTime[j] + waterDuration[j];
                int startLand2 = max(finishWater2, landStartTime[i]);
                int finishLand2 = startLand2 + landDuration[i];
                ans = min(ans, finishLand2);
            }
        }
        return ans;
    }
};