class Solution {
   public:
    int calPoints(vector<string>& operations) {
        stack<int> compute;
        int sum = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int first = compute.top();
                compute.pop();
                int second = compute.top();
                compute.push(first);
                compute.push(first + second);
            } else if (operations[i] == "D") {
                int first = compute.top();
                compute.push(2 * first);
            } else if (operations[i] == "C") {
                compute.pop();
            } else {
                compute.push(stoi(operations[i]));
            }
        }

        while (!compute.empty()) {
            sum += compute.top();
            compute.pop();
        }

        return sum;
    }
};