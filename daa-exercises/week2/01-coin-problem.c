// 1-G-Coin Problem (Greedy)
#include <stdio.h>

int main() {
    int v;
    if (scanf("%d", &v) != 1) {
        return 0;
    }

    int coins[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v >= coins[i]) {
            count += v / coins[i];
            v %= coins[i];
        }
    }

    printf("%d", count);

    return 0;
}
