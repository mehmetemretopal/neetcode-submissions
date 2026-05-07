class Solution {
   public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) { return !isalnum(c); }),
                s.end());
        for (auto& x : s) {
            x = tolower(x);
        }
        for (size_t i = 0; i < s.size(); i++) {
            auto k = s.size() - 1 - i;
            if (s[i] != s[k]) {
                return false;
            }
        }
        return true;
    }
};
