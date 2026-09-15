#include <string>
#include <vector>

class Solution {
public:
    int romanToInt(std::string s) {
        int total = 0;
        
        // Fast direct lookup array using ASCII values as indices
        int roman[128];
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int n = s.length();
        for (int i = 0; i < n; i++) {
            // If the current character is smaller than the next one, subtract it
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } 
            // Otherwise, add it
            else {
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna