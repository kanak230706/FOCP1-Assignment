#include <stdio.h>
int main() {
    int n, i, a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    a = arr[n - 1];
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = a;
    printf("Array after cyclic rotation by one position:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
