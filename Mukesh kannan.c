#include <stdio.h>

int main()
{
    //star pattern

   /* int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }

        printf("\n");
    } */

//hollow patter
/* int i, j, N;

    printf("Enter number of rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } */

    //num pattern
   /* int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=N-i+1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }*/


    //simple calculator using switch case
char oprator;
    float num1, num2, result;//=0.0f;

    printf("Enter [number 1] [+ - * /] [number 2]\n");

    scanf("%f %c %f", &num1, &oprator, &num2);

    switch(oprator)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, oprator, num2, result);


    return 0;
}



