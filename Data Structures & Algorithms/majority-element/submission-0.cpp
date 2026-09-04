class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>majElement;
        for(int num : nums){
            majElement[num]++;
        }
        for(auto n : majElement){
            if(n.second > ceil(nums.size()/2))
                return n.first;
        }
        return -1;
    }
};