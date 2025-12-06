class Solution {
public:
    int hammingWeight(int n) {
        vector<int>vec;
        int bin=0;
        while(n!=0) {
            int rem=n%2;
            vec.push_back(rem);
            n=n/2;
        }
        for(int val : vec){
            if(val==1)
                bin++;
        }
        return bin;
    }
};