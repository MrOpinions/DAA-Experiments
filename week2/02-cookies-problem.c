// 2-G-Cookies Problem (Greedy)
#include <stdio.h>

int main() {
    int n, m;

    if (scanf("%d", &n) != 1) return 0;
    long long g[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &g[i]);
    }

    if (scanf("%d", &m) != 1) return 0;
    long long s[m];
    for (int i = 0; i < m; i++) {
        scanf("%lld", &s[i]);
    }

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            long long temp = g[i];
            int j;
            for (j = i; j >= gap && g[j - gap] > temp; j -= gap) {
                g[j] = g[j - gap];
            }
            g[j] = temp;
        }
    }

    for (int gap = m / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < m; i++) {
            long long temp = s[i];
            int j;
            for (j = i; j >= gap && s[j - gap] > temp; j -= gap) {
                s[j] = s[j - gap];
            }
            s[j] = temp;
        }
    }

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            i++;
        }
        j++;
    }

    printf("%d\n", i);

    return 0;
}
