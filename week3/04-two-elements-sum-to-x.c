// 4-Two Elements sum to x (recursive, sorted array)
#include <stdio.h>

int checkSum(int arr[], int left, int right, int x) {
    if (left >= right) {
        return 0;
    }

    int sum = arr[left] + arr[right];

    if (sum == x) {
        printf("%d\n%d\n", arr[left], arr[right]);
        return 1;
    } else if (sum < x) {
        return checkSum(arr, left + 1, right, x);
    } else {
        return checkSum(arr, left, right - 1, x);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("No\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    if (!checkSum(arr, 0, n - 1, x)) {
        printf("No\n");
    }

    return 0;
}
