 #include<stdio.h>
 int main(){
    int year;
    printf("Enter a year to check it is a leap year or not: ");
    scanf("%d",year);
    if(year%4==0 && year%400!=0 || year%400==0){
        printf("This is a leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
 }