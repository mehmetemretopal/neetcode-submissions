class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int fst = 0;
        int lst = numbers.size() - 1;
        vector<int> result;
        while (numbers[fst] + numbers[lst] != target && fst < lst && numbers[fst] != numbers[lst])
        {
            int a = numbers[fst] + numbers[lst];
            if (target > a)
            {
                fst++;
            }
            if (target < a)
            {
                lst--;
            }
        }
        result.push_back(fst + 1);
        result.push_back(lst + 1);

        return result;
    }
};
