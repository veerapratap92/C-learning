#include<stdio.h>
#include<conio.h>

void main()
{

int marks[3];
int sum=0,i;

for (i=0;i<3;i++)
{
    printf("Enter value:");
    scanf("%d",&marks[i]);
}
for(i=0;i<3;i++)
    sum=sum+marks[i];
printf("sum=%d",sum);
getch();
}
