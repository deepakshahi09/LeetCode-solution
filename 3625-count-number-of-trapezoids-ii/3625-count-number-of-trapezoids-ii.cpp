class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int n = points.size();

        // cnt1: slope k -> (intercept b -> number of segments on that line)
        unordered_map<double, unordered_map<double, int>> cnt1;
        // cnt2: encoded midpoint p -> (slope k -> number of segments with that midpoint and slope)
        unordered_map<int, unordered_map<double, int>> cnt2;

        cnt1.reserve(n * n);
        cnt2.reserve(n * n);

        for (int i = 0; i < n; ++i) {
            int x1 = points[i][0], y1 = points[i][1];
            for (int j = 0; j < i; ++j) {
                int x2 = points[j][0], y2 = points[j][1];
                int dx = x2 - x1;
                int dy = y2 - y1;

                // slope k and "intercept" b (for vertical lines we store x = const)
                double k, b;
                if (dx == 0) {
                    k = 1e9;      // special big value for vertical lines
                    b = x1;       // use x as "intercept"
                } else {
                    k = 1.0 * dy / dx;
                    // line: y = kx + c  => c = (y1*dx - x1*dy)/dx
                    b = 1.0 * (1LL * y1 * dx - 1LL * x1 * dy) / dx;
                }

                // count this segment under its line (k, b)
                cnt1[k][b] += 1;

                // encode midpoint of the segment as an int key
                int midx = x1 + x2; // range [-2000, 2000]
                int midy = y1 + y2; // range [-2000, 2000]
                int p = (midx + 2000) * 4000 + (midy + 2000);
                cnt2[p][k] += 1;
            }
        }

        long long ans = 0;

        // 1) Count all quadrilaterals with at least one pair of parallel sides:
        // for a fixed slope k, choose two *different* parallel lines,
        // and one segment on each line.
        for (auto &kv : cnt1) {
            auto &mp = kv.second;
            int prefix = 0;
            for (auto &e : mp) {
                int t = e.second;   // number of segments on this line
                ans += 1LL * prefix * t; // combine with segments on previous lines
                prefix += t;
            }
        }

        // 2) Subtract parallelograms (they were counted twice:
        // once for each direction of parallel sides).
        // Parallelograms are determined by pairs of segments
        // with the same midpoint and same slope.
        for (auto &kv : cnt2) {
            auto &mp = kv.second;
            int prefix = 0;
            for (auto &e : mp) {
                int t = e.second;
                ans -= 1LL * prefix * t;
                prefix += t;
            }
        }

        return (int)ans;
    }
};
