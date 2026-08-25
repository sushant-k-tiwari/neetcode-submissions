class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while (left <= right) {
            int mid = (right - left) / 2 + left;
            if (target < nums[mid]) {
                right = mid-1;
            }
            if(target>nums[mid]){
                left=mid+1;
            }
            if(target==nums[mid]){
                return mid;
            }
        }
        return -1;
    }
};
