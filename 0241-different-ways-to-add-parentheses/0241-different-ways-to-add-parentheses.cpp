class Solution {
public:
    vector<int> diffWaysToCompute(string expr) {
        vector<int> res;

        // Step 1: try splitting at every operator
        for (int i = 0; i < expr.size(); i++) {
            char c = expr[i];

            if (c == '+' || c == '-' || c == '*') {

                // compute all results from left side
                vector<int> left = diffWaysToCompute(expr.substr(0, i));

                // compute all results from right side
                vector<int> right = diffWaysToCompute(expr.substr(i + 1));

                // combine results based on current operator
                for (int a : left) {
                    for (int b : right) {
                        if (c == '+') res.push_back(a + b);
                        else if (c == '-') res.push_back(a - b);
                        else if (c == '*') res.push_back(a * b);
                    }
                }
            }
        }

        // Step 2: base case — if no operator found, entire string is just a number
        if (res.empty()) {
            res.push_back(stoi(expr));
        }

        return res;
    }
};
