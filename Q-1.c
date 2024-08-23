#include<stdio.h>
void main()
{
    int C;
    float F;
    printf("Enter the Celsius :- ");
    scanf("%d",&C);

    F = (1.8 * C) + 32;

    printf(" Fahrenheit will be :- %.2f ",F);
}