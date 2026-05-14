class Solution {
   public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) return false;

        stack<char> deneme;

        for (size_t i = 0; i < s.size(); i++)  // ikişer değil, birer birer
        {
            char c = s[i];

            // Açan parantezse stack'e ekle
            if (c == '(' || c == '{' || c == '[') {
                deneme.push(c);
            }
            // Kapatan parantezse stack'in tepesiyle karşılaştır
            else {
                if (deneme.empty()) return false;

                char top = deneme.top();
                deneme.pop();

                if (c == ')' && top != '(') return false;
                if (c == '}' && top != '{') return false;
                if (c == ']' && top != '[') return false;
            }
        }

        // Stack boşsa tüm parantezler eşleşti
        return deneme.empty();
    }
};
