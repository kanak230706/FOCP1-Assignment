#include <stdio.h>
int main() {
    int a = 15, b = 10;
    int sub = a + (~b + 1);
    printf("Difference: %d\n", sub);
    return 0;
}
