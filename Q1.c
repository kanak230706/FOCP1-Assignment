#include <stdio.h>
#include <math.h>  

int main() {
    int no, origNum, rem, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &no);
    origNum = no;
    while (origNum != 0) {
        origNum /= 10;
        ++n;
    }
    origNum = no;
    while (origNum != 0) {
        rem = origNum % 10;
        result += pow(rem, n);
        origNum /= 10;
    }
    if ((int)result == no)
        printf("%d is an Armstrong number.\n", no);
    else
        printf("%d is not an Armstrong number.\n", no);

    return 0;
}
