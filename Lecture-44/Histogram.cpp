class Solution {
public:
    int solve(vector<int>& a) {
        int n = a.size();
        stack<int> s;
        int ns[100005], ps[100005];
        // Lets calculate next smaller first
        for (int i = 0 ; i < n ; i++) {
            if (s.empty() || a[s.top()] <= a[i]) {
                s.push(i);
            }
            else {
                while (!s.empty() and a[s.top()] > a[i]) {
                    ns[s.top()] = i;
                    s.pop();
                }
                s.push(i);
            }
        }

        while (!s.empty()) {
            ns[s.top()] = n;
            s.pop();
        }

        // Lets calculate the previous smaller
        ps[0] = -1;
        s.push(0);
        for (int i = 1 ; i < n ; i++) {
            // 1 5 6 2
            while (!s.empty() and a[s.top()] >= a[i]) {
                s.pop();
            }

            if (!s.empty()) {
                ps[i] = s.top();
            }
            else {
                ps[i] = -1;
            }
            s.push(i);
        }

        int area = INT_MIN;
        for (int i = 0 ; i < n ; i++) {
            int l = ns[i] - ps[i] - 1;
            int h = a[i];
            int x = l * h;
            area = max(area, x);
        }
        return area;
    }

    int largestRectangleArea(vector<int>& heights) {
        return solve(heights);
    }
};