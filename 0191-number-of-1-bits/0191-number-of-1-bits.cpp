class Solution {
public:
    int hammingWeight(int n) {
        int bin = 0;
        while (n != 0) {
            int rem = n % 2;
            if(rem==1)
                bin++;
            n = n / 2;
        }
        return bin;
    }
};