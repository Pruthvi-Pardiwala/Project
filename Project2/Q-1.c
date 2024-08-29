#include<stdio.h>
void main()
{
    int sub1,sub2,sub3,sub4;
    float avg;
    char c;

    printf("Enter Sub1 :- ");
    scanf("%d",&sub1);
    printf("Enter Sub2 :- ");
    scanf("%d",&sub2);
    printf("Enter Sub3 :- ");
    scanf("%d",&sub3);
    printf("Enter Sub4 :- ");
    scanf("%d",&sub4);

    avg = sub1 + sub2 +sub3 + sub4 / 100 ;

    printf("\nAverage Percent :- %.2f",avg);

    if (avg <= 90)
    {
        printf("\nGrade A");
    }
    else if (avg <= 80)
    {
        printf("\nGrade B");
    }
    else if (avg <= 70)
    {
        printf("\nGrade C");
    }
    else if (avg <= 50)
    {
        printf("\nGrade D");
    }
    else
    {
        printf("\nGrade F");
    }

    switch (c)
    {
        case 'A':
        printf("Excellent work!.");
        break;

        case 'B':
        printf("Well done.");
        break;

        case 'C':
        printf("Good job.")
        break;

        case 'D':
        printf()
    }
}