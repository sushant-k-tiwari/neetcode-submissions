class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        for(int i=0, j=0; i<t.length(); i++){
            if(s[j] == t[i]){
                count+=1;
                j++;
            }
        }
        if(count == s.length())
            return true;
        return false;
    }
};