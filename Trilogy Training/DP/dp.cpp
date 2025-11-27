#include<bits/stdc++.h>
using namespace std;

// LC 198 - House Robber

typedef vector<int> vi;

class Solution {
private:
    int rob(vi& nums, int i) {
        if(i < 2) { return (i == 0) ? nums[0] : max(nums[0], nums[1]); }
        int take = nums[i] + rob(nums, i-2);
        int not_take = rob(nums, i-1);
        return max(take, not_take);
    }

    int rob_memo(vi& nums, int i, vi& memo) {
        if(memo[i] != -1) { return memo[i]; }
        int take = nums[i] + rob(nums, i-2);
        int not_take = rob(nums, i-1);
        return (memo[i] = max(take, not_take));
    }

    int tabulation(vi& nums) {
        vi dp(nums.size(), -1);
        dp[0] = nums[0], dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++) {
            int take = nums[i] + dp[i-2];
            int not_take = dp[i-1];
            dp[i] = max(take, not_take);
        }
        return dp[nums.size() - 1];
    }

    int tabulation_space_optimized(vi& nums) {
        if(nums.size() < 2) { return nums[0]; }
        int prev2 = nums[0], prev = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++) {
            int curr = max(nums[i] + prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }

public:
    int rob(vi& nums) {

        // vi memo(nums.size(), -1);
        // memo[0] = nums[0], memo[1] = max(nums[0], nums[1]);
        return tabulation_space_optimized(nums);
    }
};