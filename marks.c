#include <stdio.h>

int main() {
    double m1, m2, m3, total, percent;

    printf("To pass: 40%% overall and 33%% in each subject.\n");
    printf("Enter marks in Physics: ");
    scanf("%lf", &m1);
    printf("Enter marks in Chemistry: ");
    scanf("%lf", &m2);
    printf("Enter marks in Maths: ");
    scanf("%lf", &m3);

    total=m1+m2+m3;
    percent =(total/300)*100;

    printf("Percentage: %.2lf%%\n", percent);

    if (m1<33 || m2<33 || m3<33)
        printf("Failed (subject marks below 33%%)\n");
    else if (percent<40)
        printf("Failed (overall below 40%%)\n");
    else
        printf("Passed\n");

    return 0;
}
