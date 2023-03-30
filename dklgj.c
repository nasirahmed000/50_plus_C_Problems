#include<stdio.h>
int main()
{
    char colorCode;
    printf("enter the first word of Red , white or black :\n");
    scanf("%c",&colorCode);

    switch (colorCode){
    case 'r':
    case 'R':
        printf("You select Red.");
        break;

    case 'w':
    case 'W':
        printf("You select White.");
        break;
    case 'b':
    case 'B':
        printf("You select Black.");
        break;

    default:
        printf ("Wrong choose!!!!!");
        break ;
        }
        return 0;
}

