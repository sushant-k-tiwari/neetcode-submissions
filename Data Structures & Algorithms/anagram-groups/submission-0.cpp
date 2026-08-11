class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (string word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());

            anagramGroups[sortedWord].push_back(word);
        }

        vector<vector<string>> result;

        for (pair<const string, vector<string>>& group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};