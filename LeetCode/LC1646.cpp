#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int getMaximumGenerated(int n) {
//         int nums[n+1];
//         nums[0] = 0;
//         nums[1] = 1;
//         for(int i = 1; i<=(n/2); i++){
//             nums[i*2] = nums[i];
//             nums[(i*2) + 1] = nums[i] + nums[i+1];
//         }
//         for(int i = 0; i<=n; i++){
//             cout << nums[i];
//         }
//         int max = INT_MIN;
//         return 0;
//     }
// };

int main()
{
    int n = 7;
    vector<int> nums(n+1);
    // int nums[n + 1];
    nums[0] = 0;
    nums[1] = 1;
    for (int i = 1; i <= (n / 2); i++)
    {
        nums[i * 2] = nums[i];
        nums[(i * 2) + 1] = nums[i] + nums[i + 1];
    }
    
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if(max < nums[i]){
            max = nums[i];
        }
    }
    return max;
}