// 4-DP-Longest non-decreasing Subsequence
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        int ch;
        while ((ch = getchar()) != EOF) {
            if ((ch >= '0' && ch <= '9') || ch == '-') {
                ungetc(ch, stdin);
                break;
            }
        }
        scanf("%d", &arr[i]);
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }

    int max_len = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] >= arr[j]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if (dp[i] > max_len) {
            max_len = dp[i];
        }
    }

    printf("%d\n", max_len);
    return 0;
}
