#include<stdio.h>
#include<conio.h>

void main()
{

int inte;

printf("Enter the value:");
scanf("%d",&inte);

if(inte==0)
printf("%d is zero",inte);

else if(inte%2==0)

    printf("%d is even number",inte);
else

printf("%d is odd number",inte);

getch();
}
