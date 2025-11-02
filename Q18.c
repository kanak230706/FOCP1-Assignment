#include <stdio.h>
int main() {
    int n, i, j;
    int dup;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int printed[n]; 
    int k = 0; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are:\n");
    for (i = 0; i < n; i++) {
        dup = 0;  
        for (j = 0; j < k; j++) {
        if (arr[i] == printed[j]) {
         dup = 1;
        break;
            }
        }
        if (dup)
     continue;       
 for (j = i + 1; j < n; j++) {
     if (arr[i] == arr[j]) {
     printf("%d ", arr[i]);
   printed[k++] = arr[i]; 
                break;
            }}}
    printf("\n");
    return 0;
}
