#include<stdio.h>
int main()
{
    int x , y , result ;
    scanf ("%d %d", &x ,&y );
    result = (x>=y)? x : y ;
    printf ("max is %d", result);
    return 0;


}
