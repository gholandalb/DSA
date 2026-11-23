class Solution {
public:
    int l_ans = 0, r_ans = 0;
    string res = "";
    int ver_tamanho(string s, int l, int r)
    {
        if (l < 0 || r >= s.size())
            return 0;
        if (s[l] == s[r])
            return 2 + ver_tamanho(s, l - 1, r + 1);
        else
            return 0;
    }

    string longestPalindrome(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            int ans1 = 0, ans2 = 0;
            ans1 = ver_tamanho(s, i - 1, i + 1) + 1;
            if (ans1 > ans)
                {
                    ans = ans1;
                    l_ans = i - (ans1/2);
                    r_ans = i + (ans1/2);
                }
            if (i < s.size() -1 && s[i] == s[i + 1])
            {
                ans2 = ver_tamanho(s, i - 1, i + 2) + 2;
                if (ans2 > ans)
                {
                    ans = ans2;
                    l_ans = i - (ans2/2) + 1;
                    r_ans = i + (ans2/2);
                }
            }

        }
        for (int i = l_ans; i <= r_ans; i++)
        {
            res.push_back(s[i]);
        }
        return res;
    }
};