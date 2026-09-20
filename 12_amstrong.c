#include <stdio.h>
#include <math.h>

int main() {
    int n, rem, sum = 0, original;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &n);

    original = n;   // store the number after input

    while(n != 0) {
        rem = n % 10;                // extract last digit
        sum = sum + (int)round(pow(rem, 3));     // cube the digit and add
        n = n / 10;                  // remove last digit
    }

    if(original == sum)
        printf("It is Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
