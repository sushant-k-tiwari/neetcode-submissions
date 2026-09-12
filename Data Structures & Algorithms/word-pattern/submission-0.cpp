class Solution {
   public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;

        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }
        unordered_map<char, string> mapping;
        unordered_map<string, char> reverseMapping;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string word = words[i];

            if (mapping.count(c)) {
                if (mapping[c] != word) {
                    return false;
                }
            }

            if (reverseMapping.count(word)) {
                if (reverseMapping[word] != c) {
                    return false;
                }
            }

            mapping[c] = word;
            reverseMapping[word] = c;
        }
        return true;
    }
};