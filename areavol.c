#include<stdio.h>
#include<math.h>
int main(){
    //AREA AND VOLUME CALCULATOR PROGRAM
    float radius=0.0,area=0.0,surface_area=0.0,volume=0.0;
    const float pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area= pi* pow(radius, 2);
    printf("The area of the circle is: %.2f\n", area);

    surface_area= 4 * pi * pow(radius, 2);
    printf("The surface area of the circle is: %.2f\n", surface_area);

    volume=4/3*pi* pow(radius,3);
    printf("The volume of the circle is: %.2f\n", volume);

    return 0;
}