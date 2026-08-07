class Solution {
public:
    bool is_k_sufficient(vector<int>& piles, int h, int k)
    {
        int total_time = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            total_time += piles[i]/k;
            if (piles[i]%k != 0)
                total_time++;
            if (total_time > h)
                return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        int ans = -1;
        while (l <= r)
        {
            int mid = (r - l)/2 + l;
            if (is_k_sufficient(piles, h, mid))
            {
                ans = mid;
                r = mid - 1; 
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};