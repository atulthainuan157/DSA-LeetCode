class Solution {
    public int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        int temp = n;
        int binary = 0;
        while (temp > 0) {
            binary = (binary << 1) | 1;
            temp = temp >> 1;
        }
        return binary ^ n;
    }
}