#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character to check it is UpperCase or in LowerCase: ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("The character is in LowerCase");
    }
    else if(ch>=65 && ch<=91){
        printf("The character is in UpperCase");
    }
    else{
        printf("It is a symbol");
    }
    return 0;
}