class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }
        if (n == 0)
            return 0;
        return b;
    }
};