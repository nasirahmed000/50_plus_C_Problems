#include<stdio.h>

 int square (int num )
 {
     int result = num*num;
     return result;
 }

int main()
{
    int x = square (5);
    printf ("square is : %d ",x );
    return 0;

}

