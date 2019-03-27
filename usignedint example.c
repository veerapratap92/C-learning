#include<stdio.h>
#include<conio.h>
/**************************************
Author: Veerapratap
Purpose: To read distance (unsigned int) and print it.
***************************************/

void main()

{

    unsigned int distance;
    printf("Enter the distance between two places:");
    scanf("%u",&distance);
    printf("you have entered: %u", distance);
    getch();

}
