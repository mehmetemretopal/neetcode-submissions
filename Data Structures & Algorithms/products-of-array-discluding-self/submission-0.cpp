class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> result;
        for (size_t i = 0; i < nums.size(); i++)
        {
            int b=nums[i];
            int carpim = 1;
            nums[i] = 1;
            for (size_t j = 0; j < nums.size(); j++)
            {
                carpim= nums[j] * carpim ;
                
            }
            result.push_back(carpim);
            nums[i] = b;
        }
        
        return result;
    }
};
