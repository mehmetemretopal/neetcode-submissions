class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> tamamyetistin;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                int toplam = nums[i] + nums[j];
                if (toplam == target)
                {
                    tamamyetistin.push_back(i);
                    tamamyetistin.push_back(j);
                    return tamamyetistin;
                }
            }
        }
        return tamamyetistin; 
    }
};
