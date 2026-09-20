//Write a program to calculate the sum of digits of a given number
#include<stdio.h>
int main(){
    int rem,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(;n!=0;n=n/10){
        rem=n%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
}