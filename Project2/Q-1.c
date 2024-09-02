#include<stdio.h>
void main()
{
    int total,sub1,sub2,sub3,sub4;
    float avg;
    char Grade;

    printf("Enter Sub1 :- ");
    scanf("%d",&sub1);
    printf("Enter Sub2 :- ");
    scanf("%d",&sub2);
    printf("Enter Sub3 :- ");
    scanf("%d",&sub3);
    printf("Enter Sub4 :- ");
    scanf("%d",&sub4);

    if ( sub1 > 100 || sub2 > 100 || sub3 > 100 || sub4 > 100 )
        {
        printf("Error Wrong imput...");
        }
    else
        {
            total = sub1 + sub2 + sub3 + sub4 ;
            avg = total / 4 ;

            printf("\nAverage Percent :- %.2f",avg);

            if (avg >= 90)
                {
                    printf("\nGrade A");
                    Grade = 'A';
                }
            else if (avg >= 80)
                {
                    printf("\nGrade B");
                    Grade = 'B';
                }
            else if (avg >= 70)
                {
                    printf("\nGrade C");
                    Grade = 'C';
                }
            else if (avg >= 50)
                {
                    printf("\nGrade D");
                    Grade = 'D';
                }
             else
                {
                    printf("\nGrade F");
                    Grade = 'F';
                }

        switch (Grade)
            {
                case 'A':
                    printf("\nExcellent work!.");
                break;

                case 'B':
                    printf("\nWell done.");
                break;

                case 'C':
                    printf("\nGood job.");
                break;

                case 'D':
                    printf("\nYou passed, but you could do better.");
                break;

                case 'F':
                    printf("\nSorry, you failed.");
                break;

                default :
                    printf("\nWrong Answer");
            }
        if (avg>=50)
            {    
                printf("\nExcellent work! You are eligible for the next level.");
            }
        else 
            {
                printf("\nPlease try again next time");
            }
    }
}