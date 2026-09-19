#include <stdio.h>
int main() {
    int n,rem,largest=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0){
        rem=n%10;          // extract last digit
        if(rem>largest) {    // compare with current largest
            largest=rem;
        }
        n=n/10;            // remove last digit
    }

    printf("Largest digit = %d\n", largest);
    return 0;
}
