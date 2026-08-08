class Solution {
public:
    bool isPalindrome(string s) 
    {
        string only_char;
        for (char c : s)
        {
            if (isalnum(c))
            {
                only_char.push_back(tolower(c));
            }
            else
                continue;
        }
        int j = only_char.size() - 1;
        for (int i = 0; i < j; i++)
        {
            if (only_char[i] == only_char[j])
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