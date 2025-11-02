#include <stdio.h>
int main() {
    int x = 3, y = 7, m = 2, c = 1;

    if (y == m * x + c)
        printf("Point lies on the line\n");
    else
        printf("Point does not lie on the line\n");
    return 0;
}

