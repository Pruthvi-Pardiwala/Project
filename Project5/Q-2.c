//Develop a Program to find the largest element from a given 2D array.
#include<stdio.h>
void main()
{
    int c,r,i,j;
    int arr[10][10];

    printf("Enter the numbers of Row :- ");
    scanf("%d",&r);
    printf("Enter the numbers of Column :- ");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements array[%d][%d] :- ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\narray[%d][%d] :- %d",i,j,arr[i][j]);
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if()
            {
                
            }
        }
    }
}