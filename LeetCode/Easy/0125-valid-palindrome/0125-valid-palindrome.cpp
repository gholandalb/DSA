class Solution {
public:
    bool isPalindrome(string s) 
    {

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9'))
                continue;
            else
            {
                s.erase(s.begin() + i);
                i--;
            }
        }
        int j = s.size() - 1;
        for (int i = 0; i < j; i++)
        {
            if (tolower(s[i]) == tolower(s[j]))
            {
                j--;
                continue;
            }
            else
                return false;
        }
        return true;
    }
};