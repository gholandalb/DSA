class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        multiset<char> atual;
        int l = 0, size = 0, ans = 0;
        for (int r = 0; r < s.size(); r++)
        {
            atual.insert(s[r]);
            while (atual.count(s[r]) > 1)
            {
                atual.erase(atual.find(s[l]));
                l++;
            }
            size = r - l + 1;
            ans = max(ans, size);
        }
        return ans;
    }
};