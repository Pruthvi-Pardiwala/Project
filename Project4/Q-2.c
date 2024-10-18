#include<stdio.h>
void main()
{
    int i,j,num;

    printf("enter the num :- ");
    scanf("%d",&num);

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
}