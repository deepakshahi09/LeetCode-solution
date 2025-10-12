class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char op = '+';
        long num = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            // Build the current number
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            // If operator or end of string
            if ((!isdigit(c) && c != ' ') || i == s.size() - 1) {
                if (op == '+') {
                    st.push(num);
                } 
                else if (op == '-') {
                    st.push(-num);
                } 
                else if (op == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * num); // ✅ multiply popped value with current number
                } 
                else if (op == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / num); // ✅ divide popped value with current number
                }

                // Update operator and reset number
                op = c;
                num = 0;
            }
        }

        // Sum everything in stack
        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
