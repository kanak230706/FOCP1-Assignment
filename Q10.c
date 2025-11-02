#include<stdio.h>
int main() {
    int n, i, found = -1,count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            count++;   
        }
    }
   printf("%d is the count",count);
return 0;
}
