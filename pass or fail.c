#include <stdio.h>

int main(void) {
int num;
	printf("Enter marks : ");
	scanf("%d",&num);
	if(num >= 40)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
	return 0;
}
