// 5-G-Product of Array elements-Minimum (Greedy)
#include <stdio.h>
#include <stdlib.h>

int cmpAsc(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

int cmpDesc(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (y > x) return 1;
    if (y < x) return -1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("0");
        return 0;
    }

    long long a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%lld", &b[i]);
    }

    qsort(a, n, sizeof(long long), cmpAsc);
    qsort(b, n, sizeof(long long), cmpDesc);

    long long min_sum = 0;
    for (int i = 0; i < n; i++) {
        min_sum += a[i] * b[i];
    }

    printf("%lld", min_sum);

    return 0;
}
