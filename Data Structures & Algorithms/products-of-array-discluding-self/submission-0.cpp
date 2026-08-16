class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                result.push_back(0);
            } else if (zeroCount == 1) {
                if (nums[i] == 0) {
                    result.push_back(product);
                } else {
                    result.push_back(0);
                }
            } else {
                result.push_back(product / nums[i]);
            }
        }
        return result;
    }
};
