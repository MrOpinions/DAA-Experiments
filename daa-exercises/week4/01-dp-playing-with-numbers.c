// 1-DP-Playing with Numbers (ways to write n using 1 and 3)
#include <stdio.h>

long long countWays(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;

    long long dp[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
    }

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        if (i >= 1) {
            dp[i] += dp[i - 1];
        }
        if (i >= 3) {
            dp[i] += dp[i - 3];
        }
    }

    return dp[n];
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%lld\n", countWays(n));
    }
    return 0;
}
