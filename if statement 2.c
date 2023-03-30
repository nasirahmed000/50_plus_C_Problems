#include<stdio.h>
int main()
{
    int temperature ;
    printf ("Enter temperature value : ");
    scanf("%d ", &temperature );

    if (temperature > 30 )
        printf( " Todays weather is too hot.");

         if (temperature < 30 ){

        printf( " Todays weather is too cold .");

         }
         return 0;

}




