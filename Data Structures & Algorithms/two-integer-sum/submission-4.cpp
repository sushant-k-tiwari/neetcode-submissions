class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>checkValue;
        for(int i=0; i<nums.size(); i++){
            int rem = target-nums[i];
            if(checkValue.count(rem)){
                return {checkValue[rem], i};
            }
            checkValue[nums[i]] = i;
        }
        return {};
    }
};
