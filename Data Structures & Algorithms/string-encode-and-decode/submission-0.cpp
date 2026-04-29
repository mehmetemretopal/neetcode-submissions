class Solution {
public:

   string encode(vector<string> &strs)
    {
        string encoded = "";
        for (auto str : strs)
        {
            encoded += to_string(str.size()) + "#";//11#
            encoded += str;//11#Hello,World
        }
        return encoded;
    }

    vector<string> decode(string s)
    {
        vector<string> result;
        int i = 0;
        while (i < s.size())
        {
            int j = i;
            while (s[j] != '#')
                j++;
         
            int len = stoi(s.substr(i, j - i));//burası ön ekteki 11 sayısını aldı bu bizim uzunluğumuz
         
            string str = s.substr(j + 1, len);
            result.push_back(str);
            i = j + 1 + len; // ex. 1 + 1 + 5
        }
        return result;
    }
};
