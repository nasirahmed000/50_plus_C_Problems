#include<stdio.h>
#include <stdbool.h>

int main(){
    int x,y;
    bool num=true;
    while (num==true)
    {
        printf("Please enter the first number:");
        scanf("%d",&x);
        printf("Please enter the second number: ");
        scanf("%d",&y);
        int sum=x+y;
        int subtraction=x-y;
        int division=x/y;
        int multiplication=x*y;
        printf("The sum is :%d \n",sum);
        printf("The subtract is :%d \n",subtraction);
        printf("The division is :%d \n",division);
        printf("The multiplication is :%d \n",multiplication);
        printf("\n");
        printf("\n");
        printf("\n");
    }

}

