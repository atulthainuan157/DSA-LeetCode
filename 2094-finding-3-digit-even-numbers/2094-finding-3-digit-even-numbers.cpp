class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>count(10,0);
        for(int val : digits) {
            count[val]++;
        }
        vector<int>ans;
        for(int num=100; num<=999; num+=2) {
            int x = num;
            vector<int>need(10, 0);
            for(int i=0; i<3; i++) {
                need[x%10]++;
                x/=10;
            }
            bool isOK = true;
            for(int d=0; d<=9; d++) {
                if(need[d]>count[d]) {
                    isOK = false;
                    break;
                }
            }
            if(isOK) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};