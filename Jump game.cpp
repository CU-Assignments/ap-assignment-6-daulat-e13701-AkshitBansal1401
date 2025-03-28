class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int n = nums.size();
            vector<bool> dp(n, false);
            dp[0] = true;
            
            for (int i = 0; i < n; i++) {
                if (!dp[i]) continue;
                for (int j = 1; j <= nums[i] && i + j < n; j++) {
                    dp[i + j] = true;
                }
            }
            
            return dp[n - 1];
        }
    };
    