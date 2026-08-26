class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0, r = 0, count_ones = 0;
        int n = s.size();
        string ans = "";
        while (r < n)
        {
            if (s[r] == '1')
                count_ones++;
            if (count_ones == k)
            {
                while(s[l] != '1')
                    l++;
                if (ans.empty() || ans.size() > s.substr(l, r - l + 1).size())
                {
                    ans = s.substr(l, r - l + 1);
                }
                else if (ans.size() == s.substr(l, r - l + 1).size())
                {
                    if (ans > s.substr(l, r - l + 1))
                        ans = s.substr(l, r - l + 1);
                }
                l++;
                while(s[l] != '1')
                {
                    l++;
                    if (l >= n)
                        break;
                }

                count_ones--;
            }
            r++;
        }
        return ans;
    }
};