// 6-Pair with Difference - O(n) Time, O(1) Space (two-pointer approach)
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    if (scanf("%d", &k) != 1) return 0;

    int i = 0, j = 1;
    int found = 0;

    while (i < n && j < n) {
        if (i == j) {
            j++;
            continue;
        }

        int diff = arr[j] - arr[i];
        if (diff == k) {
            found = 1;
            break;
        } else if (diff < k) {
            j++;
        } else {
            i++;
        }
    }

    printf("%d\n", found);
    return 0;
}
