// 1-Number of Zeros in a Given Array (Divide and Conquer)
#include <stdio.h>

int findFirstZero(int arr[], int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || arr[mid - 1] == 1) && arr[mid] == 0)
            return mid;

        if (arr[mid] == 1)
            return findFirstZero(arr, mid + 1, high);
        else
            return findFirstZero(arr, low, mid - 1);
    }
    return -1;
}

int countZeroes(int arr[], int n) {
    int first = findFirstZero(arr, 0, n - 1);
    if (first == -1)
        return 0;
    return n - first;
}

int main() {
    int m;
    if (scanf("%d", &m) != 1 || m <= 0) {
        printf("0");
        return 0;
    }

    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", countZeroes(arr, m));

    return 0;
}
