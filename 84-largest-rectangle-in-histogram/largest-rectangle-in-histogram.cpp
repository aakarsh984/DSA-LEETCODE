class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> left(n);

        stack<int> st;

        // left boundary
        for(int i = 0; i < n; i++) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            left[i] = st.empty() ? 0 : st.top() + 1;

            st.push(i);
        }

        // clear stack
        while(!st.empty()) {
            st.pop();
        }

        int ans = 0;

        // right boundary + area calculation
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            int right = st.empty() ? n - 1 : st.top() - 1;

            int width = right - left[i] + 1;

            ans = max(ans, heights[i] * width);

            st.push(i);
        }

        return ans;
    }
};