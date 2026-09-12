class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> countChar;
        for (char t : text) {
            countChar[t]++;
        }

        int b = countChar['b'];
        int a = countChar['a'];
        int l = countChar['l'] / 2;
        int o = countChar['o'] / 2;
        int n = countChar['n'];

        return min({b, a, l, o, n});
    }
};