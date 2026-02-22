class Solution {
public:
    int binaryGap(int n) {
        int num=n;
        string str="";
        int ans=0;
        while(num!=0) {
            str+=to_string(num%2);
            num/=2;
        }
        for(int i=0;i<str.length();i++) {
            for(int j=i+1;j<str.length();j++) {
                if(str[i]==str[j] && str[i]=='1') {
                    ans=max(ans, j-i);
                    break;
                }
            }
        }
        return ans;
    }
};