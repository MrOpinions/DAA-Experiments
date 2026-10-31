// 3-Finding Floor Value (Divide and Conquer)
#include <stdio.h>

int findFloor(int arr[], int low, int high, int x) {
    if (low > high)
        return -1;

    if (x >= arr[high])
        return arr[high];

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
        return arr[mid];

    if (mid > 0 && arr[mid - 1] <= x && x < arr[mid])
        return arr[mid - 1];

    if (x < arr[mid])
        return findFloor(arr, low, mid - 1, x);

    return findFloor(arr, mid + 1, high, x);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int floorVal = findFloor(arr, 0, n - 1, x);

    printf("%d", floorVal);

    return 0;
}
