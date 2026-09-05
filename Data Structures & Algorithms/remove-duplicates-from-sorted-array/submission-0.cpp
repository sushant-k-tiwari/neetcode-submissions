class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0;
        while (right < n) {
            nums[left] = nums[right];
            while (right < n && nums[right] == nums[left]) {
                right++;
            }
            left++;
        }
        return left;
    }
};