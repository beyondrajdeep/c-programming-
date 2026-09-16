//Write a program to print the sum of even numbers from 1 to N.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a limit to print the sum of the even numbers from 1 to N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
     
}