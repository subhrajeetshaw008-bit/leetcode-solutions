class Solution {
public:
    int mirrorDistance(int n) {
        long long rev = 0;
        int x = n;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return abs(n - rev);
    }
};