#include<stdio.h>
int main() {
	int a[10],b[10],i,temp,n;
	printf("\nEnter 1st Array = \n");
	for(i=0;i<10;i++) {
	printf("enter your element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter 2nd Array = \n");
	for(i=0;i<10;i++){
	printf("enter your element %d : ",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("\nBefore Swapping");
	printf("\n1st Array = ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n2nd Array = ");
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	
	for(i=0;i<10;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("\n\nAfter Swapping");
	printf("\n1st Array = ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n2nd Array = ");
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
return 0;
}