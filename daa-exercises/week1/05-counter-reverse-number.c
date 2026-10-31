// Problem 5: Finding Complexity using Counter Method (reverse a number)
#include <stdio.h>

int main() {
    int n;
    int rev = 0, remainder;
    int count = 0;

    scanf("%d", &n);

    count++;
    while (count++, n != 0) {
        remainder = n % 10;
        count++;

        rev = rev * 10 + remainder;
        count++;

        n /= 10;
        count++;
    }

    count++;

    printf("%d", count);

    return 0;
}
