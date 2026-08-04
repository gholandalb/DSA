class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int p) 
    {
        int count = 0;
        int n = flowerbed.size();

        if (flowerbed[0] == 0 && n == 1)
            count++;
        else if (n > 1 && flowerbed[0] == 0 && flowerbed[1] == 0) 
        {
            count++;
            flowerbed[0] = 1;
        }
        for (int i = 1; i < n - 1; i++) 
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) 
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        if (n > 1 && flowerbed[n - 1] == 0 && flowerbed[n - 2] == 0)
        {
            flowerbed[n - 1] = 1;
            count++;
        }
        return count >= p;
    }
};