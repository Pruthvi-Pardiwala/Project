//Develop a Program to find the largest element from a given 2D array.
#include<stdio.h>
void main()
{
    int col=2,row=2,i,j;
    int arr[row][col];

    //printf("Enter the numbers of Row :- ");
    //scanf("%d",&row);
    //printf("Enter the numbers of Column :- ");
    //scanf("%d",&column);

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("Enter the elements array[%d][%d] :- ",i,j);
            scanf("%d",&arr[row][col]);
        }
    }   
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\narray[][] :- %d",arr[row][col]);
        }
        //printf("\n");
    }
}