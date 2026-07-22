class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        for (int pens = 0; pens * cost1 <= total; pens++) {
            int pensils = (total - (pens * cost1)) / cost2;
            ans += pensils + 1;
        }
        return ans;
    }
};