class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters[0] > target || letters.back() < target)
            return letters[0];
        else
        {
            auto ans = upper_bound(letters.begin(), letters.end(), target);
            if (ans == letters.end())
                return letters[0];
            return *ans;
        }
        return 0;
    }
};