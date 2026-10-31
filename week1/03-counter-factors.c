// Problem 3: Finding Complexity using Counter Method (Factor)
#include <stdio.h>

int main() {
    int num, i;
    int count = 0;

    scanf("%d", &num);

    count++;
    for (i = 1; i <= num; ++i) {
        count++;
        if (num % i == 0) {
            count++;
        }
        count++;
    }

    printf("%d", count);
    return 0;
}
