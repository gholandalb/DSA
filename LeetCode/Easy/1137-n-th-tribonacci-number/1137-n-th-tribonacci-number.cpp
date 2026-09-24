class Solution {
public:
    int tribonacci(int n) {
        int a = 0, b = 1, c = 1;
        for (int i = 3; i <= n; i++)
        {
            int temp = c;
            c = a + b + c;
            a = b;
            b = temp;
        }
        if (n == 0)
            return 0;
        else if (n == 1 || n == 2)
            return 1;
        return c;
    }
};