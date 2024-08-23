#include<stdio.h>
void main()
{
    int tringle,A,B,C;

    printf("Enter First angle :- ");
    scanf("%d",&A);
    printf("Enter Second angle :- ");
    scanf("%d",&B);

    tringle = 180 - A - B;
    printf("Enter Third angle :- %d",tringle);

}