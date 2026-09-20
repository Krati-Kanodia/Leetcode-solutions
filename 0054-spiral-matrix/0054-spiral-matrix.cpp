#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;
        if (matrix.empty()) return ans;
        
        int r1 = 0;
        int r2 = matrix.size() - 1;
        int c1 = 0;
        int c2 = matrix[0].size() - 1;
        
        while (r1 <= r2 && c1 <= c2) {
            for (int c = c1; c <= c2; ++c) ans.push_back(matrix[r1][c]);
            r1++;
            
            for (int r = r1; r <= r2; ++r) ans.push_back(matrix[r][c2]);
            c2--;
            
            if (r1 <= r2) {
                for (int c = c2; c >= c1; --c) ans.push_back(matrix[r2][c]);
                r2--;
            }
            
            if (c1 <= c2) {
                for (int r = r2; r >= r1; --r) ans.push_back(matrix[r][c1]);
                c1++;
            }
        }
        
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna