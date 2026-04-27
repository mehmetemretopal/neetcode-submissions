class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> um; 
        for (int num : nums)
        {
            um[num]++;
        }
        vector<pair<int, int>> freq;
        for (auto &pair : um)
        {
            freq.push_back({pair.second, pair.first});
        }
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());

        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(freq[i].second);
        }

        return result;
    }
};
