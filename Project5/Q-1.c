//Develop a program that finds all the negative elements from a given 1D array.
#include<stdio.h>
void main()
{
    int i=0,n;
    int array[i];

    printf("Enter the array size :-  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the array[%d] :- ",i);
        scanf("%d",&array[i]);
    }
    printf("Negative elements from an Array = ");
        for(i=0;i<n;i++)
        {
            if(array[i]<0)
            {
            printf(",%d ",array[i]);
            }
        }
}