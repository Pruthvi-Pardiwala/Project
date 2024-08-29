#include<stdio.h>
void main()
{
    int Sal,Gross,HRA,DA,TA;
    printf("Enter Basic Salary :- ");
    scanf("%d",&Sal);
    printf("Enter HRA in Persentage :- ");
    scanf("%d",&HRA);
    printf("Enter DA in persentage :- ");
    scanf("%d",&DA);
    printf("Enter TA in persentage :- ");
    scanf("%d",&TA);

    HRA = (Sal * HRA) / 100;
    DA = (Sal * DA) / 100;
    TA = (Sal * TA) / 100;

    Gross = Sal + HRA + DA + TA;

    printf("Gross salary is :- %d",Gross);     
}