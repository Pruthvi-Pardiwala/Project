#include<stdio.h>

void main()
{
    int i,count=0,num;
    printf("Enter number :- ");
    scanf("%d",num);

    for(i=1;num!=0;i++)
    {
        num=num/10;
        count++;
    }
    printf("number of count :- %d",count);
}