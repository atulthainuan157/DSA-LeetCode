class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long MOD = 1e9 + 7;

        vector<int> digits;
        vector<int> pos;

        for (int i = 0; i < s.length(); i++) {
            int val = s[i] - '0';
            if (val != 0) {
                digits.push_back(val);
                pos.push_back(i);
            }
        }

        int n = digits.size();
        vector<long long> pow10(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        vector<long long> hash(n + 1, 0);
        for (int i = 0; i < n; i++) {
            hash[i + 1] = (hash[i] * 10 + digits[i]) % MOD;
        }

        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + digits[i];
        }

        vector<int> ans;

        for (auto& q : queries) {
            int l = q[0], r = q[1];
            int L = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int R = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;
            if (L > R) {
                ans.push_back(0);
                continue;
            }
            long long sum = prefix[R + 1] - prefix[L];
            int len = R - L + 1;
            long long x =
                (hash[R + 1] - hash[L] * pow10[len] % MOD + MOD) % MOD;
            ans.push_back((x * (sum % MOD)) % MOD);
        }

        return ans;
    }
};