#include<stdio.h>
#include<conio.h>

void main()

{
    char i;

    printf("Enter a letter");
    scanf("%c",&i);

    switch (i)

   /* {
        case 'a': printf("vowel");
        break;
        case 'e': printf("vowel");
        break;
        case 'i': printf("vowel");
        break;
        case 'o': printf("vowel");
        break;
        case 'u': printf("vowel");
        break;
        default : printf("consonent");
    }
*/

{

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Vowel");
        break;
        default : printf("consonent");
}
getch ();
}

