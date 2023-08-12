#include <stdio.h>
int power(int , int);
int main() {
int a,b,result;
	printf("Enter your base number : ");
	scanf("%d",&a);
	printf("Enter your exponent number : ");
	scanf("%d",&b);
	result=power(a,b);
	printf("%d is raised to power %d is  : %d",a,b,result);
	}
	int power(int a , int b) {
	int result=1,i;
	for(int i=1;i<=b;i++) {
	result=result*a;
	}
	return result;
	}
	
	