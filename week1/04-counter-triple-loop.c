// Problem 4: Finding Complexity using Counter Method
#include <stdio.h>

int main() {
    int n;
    int count = 0;

    scanf("%d", &n);
    count++;
    for (int i = n / 2; i < n; i++) {
        count++;
        for (int j = 1; j < n; j = 2 * j) {
            count++;
            for (int k = 1; k < n; k = k * 2) {
                count++;
                count++;
            }
            count++;
        }
        count++;
    }
    count++;

    printf("%d", count);
    return 0;
}
