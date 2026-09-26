class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> valid;
        for (char i : s) {
            valid[i]++;
        }
        for (char i : t) {
            valid[i]--;
            if (valid[i] < 0) return false;
        }

        return true;
    }
};
