#include<stdio.h>
int main() {
int n,i;
printf("enter the number you want to table : ");
scanf("%d",&n);
for(int i=1;i<=10;i++) {
for (int j=1;j<=n;j++){
	printf("%d*%d=%d\t",j,i,j*i);
	}
	printf("\n");
	}
	return 0;
	}