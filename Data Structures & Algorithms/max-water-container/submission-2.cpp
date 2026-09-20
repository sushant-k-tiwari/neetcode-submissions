class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mostWater = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);

            mostWater = max(mostWater, width * height);

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return mostWater;
    }
};