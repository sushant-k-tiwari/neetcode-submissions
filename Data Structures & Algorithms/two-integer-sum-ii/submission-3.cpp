class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> result;
        for (int i = 0; i < numbers.size(); i++) {
            int rem = target - numbers[i];
            if (result.count(rem)) {
                return {result[rem], i + 1};
            }
            result[numbers[i]] = i + 1;
        }
        return {};
    }
};
