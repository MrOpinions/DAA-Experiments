// Problem 1: Finding Complexity using Counter Method
#include <stdio.h>

void function(int n) {
    int i = 1;
    int s = 1;
    int count = 0;

    count++;
    count++;

    while (s <= n) {
        count++;
        i++;
        count++;

        s += i;
        count++;
    }

    count++;

    printf("%d", count);
}

int main() {
    int n;
    scanf("%d", &n);
    function(n);
    return 0;
}
