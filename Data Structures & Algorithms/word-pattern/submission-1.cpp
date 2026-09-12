class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>patternToWord;
        unordered_map<string, char>wordToPattern;

        stringstream ss(s);
        string word;
        int i = 0;
         while(ss >> word){
            if(i >= pattern.size())
                return false;
            char p = pattern[i];
            if(patternToWord.count(p) && patternToWord[p] != word)
                return false;
            if(wordToPattern.count(word) && wordToPattern[word] != p){
                return false;
            }
            patternToWord[p] = word;
            wordToPattern[word] = p;
            i++;
         }
         return i == pattern.size();
    }
};