class Solution {
public:

    int findGCD(vector<int>& nums) 
    {
        int min, max;
        min = *min_element(nums.begin(), nums.end());
        max = *max_element(nums.begin(), nums.end());
        return gcd(max, min);
    }

    int gcd(int a, int b)
    {
        if (a%b == 0)
            return b;
        else
        {
            int temp = a%b;
            a = b;
            b = temp;
            return gcd(a, b);
        }
    }
};