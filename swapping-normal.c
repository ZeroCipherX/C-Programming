#include <stdio.h>
int main()	{
int a,b,temp;
printf("enter your first value : ");
scanf("%d",&a);
printf("enter your second value : ");
scanf("%d",&b);
printf("\nBefore swapping your first value %d and second value %d",a,b);
temp = a;
a = b;
b = temp;
printf("\nAfter swapping your first value %d and second value %d",a,b);

}
	