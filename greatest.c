#include <stdio.h>
int main() {
    double a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double greatest= a; //assume first is greatest

    if(b > greatest)greatest= b;
    if(c > greatest)greatest= c;
    if(d > greatest)greatest= d;

    printf("The greatest number is %.2lf\n", greatest);
    return 0;
}
