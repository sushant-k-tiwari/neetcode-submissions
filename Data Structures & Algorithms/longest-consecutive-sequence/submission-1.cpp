class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int pointer = 1;
        int currentLength = 1;
        int longest = 1;

        while (pointer < nums.size()) {

            if (nums[pointer] == nums[pointer - 1]) {
                pointer++;
            }

            else if (nums[pointer] == nums[pointer - 1] + 1) {
                currentLength++;
                pointer++;
            }

            else {
                currentLength = 1;
                pointer++;
            }

            longest = max(longest, currentLength);
        }

        return longest;
    }
};