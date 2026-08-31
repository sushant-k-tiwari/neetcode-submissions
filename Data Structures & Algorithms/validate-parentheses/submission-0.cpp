class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;

        unordered_map<char, char> paranthesis = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char check : s) {
            if (paranthesis.count(check)) {
                if (!valid.empty() && valid.top() == paranthesis[check]) {
                    valid.pop();
                } else {
                    return false;
                }
            } else {
                valid.push(check);
            }
        }

        return valid.empty();
    }
};