#include<stdio.h>
#include<conio.h>

void main()

{
    int i;

    printf("Enter number");
    scanf("%d",&i);

    /*
    if (i==1)
        printf("one");
    else if(i==2)
        printf("two");
    else if(i==3)
        printf("three");
    else if (i==4)
        printf("four");
    else
        printf("invalid");
*/

 switch (i)

 {

     case 1: printf("one");
     break;
     case 2: printf("two");
     break;
     case 3: printf("three");
     break;
     case 4: printf("four");
     break;
     default: printf("invalid");
     break;
 }
getch();
}
