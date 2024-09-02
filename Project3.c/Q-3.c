#include<stdio.h>
void main()
{
    int i,num,count,first,last;

    num =154;
    last = num % 10;
    
    for(i=1;num!=0;i++)
    {
        num=num/10;

    }
    printf("%d",num);
}