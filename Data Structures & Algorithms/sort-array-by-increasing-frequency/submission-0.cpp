class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqCount;

        for (int num : nums) {
            freqCount[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freqCount[a] != freqCount[b]) {
                return freqCount[a] < freqCount[b];
            }

            return a > b;
        });

        return nums;
    }
};