#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        if (intervals.size() <= 1) {
            return intervals;
        }

        std::sort(intervals.begin(), intervals.end());

        std::vector<std::vector<int>> result;
        result.push_back(intervals[0]);

        for (size_t i = 1; i < intervals.size(); ++i) {
            int current_start = intervals[i][0];
            int current_end = intervals[i][1];
            int last_end = result.back()[1];

            if (current_start <= last_end) {
                result.back()[1] = std::max(last_end, current_end);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna