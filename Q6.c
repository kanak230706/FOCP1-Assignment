#include <stdio.h>
int main() {
    int choice, n, temp, bin = 0, rem, place = 1;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter binary: ");
        scanf("%d", &n);
        temp = n;
        int dec = 0, base = 1;
        while (temp > 0) {
            rem = temp % 10;
            dec += rem * base;
            base *= 2;
            temp /= 10;
        }
        printf("Decimal: %d\n", dec);
    } else {
        printf("Enter decimal: ");
        scanf("%d", &n);
        temp = n;
        while (temp > 0) {
            rem = temp % 2;
            bin += rem * place;
            place *= 10;
            temp /= 2;
        }
        printf("Binary: %d\n", bin);
    }
    return 0;
}