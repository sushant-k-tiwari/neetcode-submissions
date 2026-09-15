class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedStr;
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            mergedStr = mergedStr + word1[i];
            mergedStr = mergedStr + word2[j];

            i++;
            j++;
        }

        mergedStr = mergedStr + word1.substr(i);
        mergedStr = mergedStr + word2.substr(j);

        return mergedStr;
    }
};