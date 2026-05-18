class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> abc;
        stack<int> a;
        for (size_t i = 0; i < temperatures.size(); i++) {
            int j = i + 1;
            while (j < temperatures.size()) {
                if (temperatures[j] > temperatures[i]) {
                    abc.push_back(j - i);
                    break;
                } else {
                    a.push(temperatures[i]);
                    j++;
                }
            }
            if (j >= temperatures.size()) {
                abc.push_back(0);  // Daha sıcak gün bulunamadı
            }
        }
        return abc;
    }
};
