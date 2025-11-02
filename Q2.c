#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0) {
        printf("HCF is not defined for 0.\n");
        return 0;
    }
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF = %d\n", a);
    return 0;
}
