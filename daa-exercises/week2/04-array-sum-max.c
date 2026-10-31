// 4-G-Array Sum max problem (Greedy, O(n log n))
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("0");
        return 0;
    }

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), cmp);

    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        max_sum += arr[i] * i;
    }

    printf("%lld", max_sum);

    return 0;
}
