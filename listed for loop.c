#include<stdio.h>
#include<conio.h>

void main()
/******************************************
name: Veerapratap
purpose: Nested for loop
******************************************/
{
    int n,i,j;
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("*\n");
    }
}
