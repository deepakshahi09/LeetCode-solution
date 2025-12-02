class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const long long M = 1e9 + 7;
    map<int, int> mp; // y -> count (sorted)

    for (auto &point : points) {
        int y = point[1];
        mp[y]++;
    }

    long long result = 0;
    long long prevHorizontalLines = 0;

    for (auto &it : mp) {
        long long count = it.second;

        long long horizontalLines = count * (count - 1) / 2; // C(count, 2)

        result = (result + horizontalLines % M * prevHorizontalLines % M) % M;
        prevHorizontalLines = (prevHorizontalLines + horizontalLines) % M;
    }

    return result % M;
        
    }
};