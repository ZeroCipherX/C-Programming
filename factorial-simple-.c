#include<stdio.h>
int main() {
int fact=1,num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++) {
	fact=fact*i;
	printf("The factorial of %d is %d \n",i,fact);
	}
	printf("\n");
	return 0;
	}
