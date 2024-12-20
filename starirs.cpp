#include <iostream>
#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }

        
        std::vector<int> dp(n + 1);
        dp[1] = 1; 
        dp[2] = 2; 

        
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2]; 
        }

        return dp[n]; 
    }
};

int main() {
    Solution solution;
    int n;

    std::cout << "Enter the number of stairs: ";
    std::cin >> n;

    int result = solution.climbStairs(n);
    std::cout << "Number of ways to climb " << n << " stairs: " << result << std::endl;

    return 0;
}



// question 
// a person can climb 1 or 2 steps at a time , calulate the number of ways in which he can climb the stairs 