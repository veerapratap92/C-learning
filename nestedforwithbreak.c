#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
for (i=1;i<=5;i++)

    for (j=6;j<=9;j++)
    {
        if(j==8)
            break;
        printf("%d%d\n",i,j);
    }
}
