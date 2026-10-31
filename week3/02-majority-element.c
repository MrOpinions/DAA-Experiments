// 2-Majority Element (Boyer-Moore voting)
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);

        if (count == 0) {
            candidate = val;
            count = 1;
        } else if (val == candidate) {
            count++;
        } else {
            count--;
        }
    }

    printf("%d", candidate);

    return 0;
}
