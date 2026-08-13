class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (string word : strs) {
            encoded += to_string(word.size()) + "#" + word;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            // Get length
            int length = stoi(s.substr(i, j - i));

            // Move past '#'
            j++;

            // Extract the actual word
            string word = s.substr(j, length);

            decoded.push_back(word);

            // Move to next encoded word
            i = j + length;
        }

        return decoded;
    }
};