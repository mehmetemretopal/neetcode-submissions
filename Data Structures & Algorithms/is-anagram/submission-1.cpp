class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        if (t.size() == s.size())
        {
            for (size_t i = 0; i <= t.size(); i++)
            {
                if (t[i] != s[i])
                {
                   
                    return false;
                }
               
            }
        }
        else{
            return false;
        }
        return true;
    }
};
