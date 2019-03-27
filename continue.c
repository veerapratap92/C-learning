#include<stdio.h>
#include<conio.h>

void main()

{
    int i;
    for (i=1000;i<=1500;i++)
    if (i%17==0)
    {
        if (i%5==0)
        {
            continue;
        }
    printf("%d\t",i);
    }
}
