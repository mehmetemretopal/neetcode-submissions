class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxResult = 0;
        while (i < j) {
            int area = (j - i) * min(heights[i], heights[j]);
            maxResult = max(maxResult, area);
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxResult;
    }
};
