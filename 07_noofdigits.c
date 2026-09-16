//Write a program to count the number of digits in a given number using a loop
#include<stdio.h>
int main(){
    int n, count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==0){
        count=1; //special case when the number is 0
    }
    else{
        while(n!=0){
            n=n/10; //extract the last digit
            count++; //increase the count
        }
    }
    printf("Total digits are %d",count);
    return 0;
}