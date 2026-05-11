class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> dis;
        vector<int> ic;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size(); i++) {
            int k = nums.size() - 1;
            int j = i + 1;
            while (j < k && k >= 0 && i != j && j != k && i != k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0)
                    k--;

                else {
                    ic.push_back(nums[i]);
                    ic.push_back(nums[j]);
                    ic.push_back(nums[k]);
                    dis.push_back(ic);
                    j++;
                    k--;
                }
                ic.clear();
            }
        }
        sort(dis.begin(), dis.end());
        dis.erase(unique(dis.begin(), dis.end()), dis.end());
        return dis;
    }
};
