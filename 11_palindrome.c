//Write a program to check whether a given number is a palindrome
#include<stdio.h>
int main(){
    int n,rem,rev=0;
    printf("Enter the number to check if it is palindrome or not: ");
    scanf("%d",&n);
    int original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev){
        printf("It is palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}