#include<stdio.h>
#include<math.h>
int main(){
    //COMPOUND INTEREST CALCULATOR PROGRAM
    float principal=0.0,rate=0.0,time=0.0,compound_interest=0.0;
    float times_compounded;
    float total;

    printf("COMPOUND INTEREST CALCULATOR PROGRAM\n");

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    printf("Enter the amount of times compounded: ");
    scanf("%f", &times_compounded);

    compound_interest = principal * pow((1 + rate/ 100), time) - principal;
    printf("The compound interest is: %.2f\n", compound_interest);

    total=principal+compound_interest;
    printf("After %.0lf year%s the amount will be: $%.2f\n", time,(time>1)?"s":"", total);
      
    return 0;
}