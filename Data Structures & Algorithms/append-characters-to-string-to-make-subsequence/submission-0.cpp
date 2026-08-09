class Solution {
   public:
    int appendCharacters(string s, string t) {
        int count = 0;
        int i = 0, j = 0;
        while (i < s.length()) {
            if (t[j] == s[i]) {
                count += 1;
                j++;
            }
            i++;
        }
        return (t.length() - count);
    }
};