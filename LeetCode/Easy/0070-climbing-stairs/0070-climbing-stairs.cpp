class Solution {
public:
    int climbStairs(int n) {
        int d1, d2;
        d1 = 1; d2 = 1;
        for (int i = 1; i < n; i++)
        {
            int temp = d2;
            d2 += d1;
            d1 = temp;
        }
        return d2;
    }
};