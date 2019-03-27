#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
int n=9;
printf("factorial of %d is %d",n,factorial(n));
getch ();
}

int factorial (int n)
{
if (n==0)
    return 1;
else
    return n*factorial(n-1);
}
