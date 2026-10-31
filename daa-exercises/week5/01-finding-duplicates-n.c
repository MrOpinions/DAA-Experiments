// 2-Finding Duplicates - O(n) Time Complexity, O(1) Space Complexity
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = -1;
    for (int i = 0; i < n; i++) {
        int val = abs(arr[i]);
        int idx = val - 1;
        if (arr[idx] < 0) {
            duplicate = val;
            break;
        }
        arr[idx] = -arr[idx];
    }

    printf("%d\n", duplicate);
    return 0;
}
