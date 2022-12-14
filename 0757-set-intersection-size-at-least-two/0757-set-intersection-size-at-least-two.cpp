class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end(), [](auto& lhs, auto& rhs) {return lhs[1] < rhs[1] || (lhs[1] == rhs[1] && lhs[0] > rhs[0]);}); 
        int ans = 0, y0 = -1, y1 = -1; 
        for (auto& interval : intervals) {
            int x = interval[0], y = interval[1]; 
            if (y0 < x && x <= y1) ++ans, y0 = y1, y1 = y; 
            else if (y1 < x) ans += 2, y0 = y-1, y1 = y; 
        }
        return ans; 
    }
};