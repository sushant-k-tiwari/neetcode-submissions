class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> topK;
        unordered_map<int, int> countNums;
        for (int i = 0; i < nums.size(); i++) {
            countNums[nums[i]]++;
        }

        priority_queue<pair<int, int>> maxOccurences;

        for (pair<const int, int>& num : countNums) {
            maxOccurences.push({num.second, num.first});
        }

        while(k>0){
            topK.push_back(maxOccurences.top().second);
            maxOccurences.pop();
            k--;
        }
            return topK;
    }
};
