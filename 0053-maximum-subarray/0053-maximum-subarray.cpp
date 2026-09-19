class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            sum = max(nums[i], sum + nums[i]);

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna