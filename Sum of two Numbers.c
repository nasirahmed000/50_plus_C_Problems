
//sum of all odd numbers between the two numbers.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, sum;
    printf("Enter num 1 : ");
    scanf("%d", &num1);
    printf("Enter num 2 : ");
    scanf("%d", &num2);

    for(int i = num1; i <= num2; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("The sum of all odd numbers between %d and %d is :  %d\n", num1, num2, sum);
    return 0;
}
