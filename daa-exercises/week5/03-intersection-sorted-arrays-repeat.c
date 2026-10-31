// 4-Print Intersection of 2 sorted arrays - O(m+n) Time, O(1) Space
// NOTE: the PDF's "4-" page shows the exact same attempt as "3-" (same attempt id),
// so this is the same solution repeated. Replace with the real Problem 4 if it differs.
#include <stdio.h>

void solve() {
    int n1;
    if (scanf("%d", &n1) != 1) return;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0;
    int first = 1;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            if (!first) {
                printf(" ");
            }
            printf("%d", arr1[i]);
            first = 0;
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
