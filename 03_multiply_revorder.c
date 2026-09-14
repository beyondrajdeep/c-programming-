#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    for(i = 10;i>=1;i--) {
        int res=num*i;
        printf("%d x %d = %d\n", num, i, res);
    }
    return 0;
}
