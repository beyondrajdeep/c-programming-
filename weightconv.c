#include<stdio.h>
int main(){
    int choice;
    float weight;
    float result;
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("enter your choice(1 or 2): ");
    scanf("%d", &choice);

    if(choice==1){
        printf("Enter your weight in kilograms:");
        scanf("%f",&weight);
        result= weight*2.20462;
        printf("%.2f kg is equal to %.2f pounds",weight,result);
    }
    else if(choice==2){
        printf("Enter your weight in pounds:");
        scanf("%f",&weight);
        result= weight/ 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms",weight,result);
    }
    else{
        printf("choose 1 or 2");
    }
    return 0;
}