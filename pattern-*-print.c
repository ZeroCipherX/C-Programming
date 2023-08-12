#include <stdio.h>
int main() {
int m,n,j,i;
	printf("enter number of rows : ");
	scanf("%d",&n);
	printf("enter number of columns : ");
	scanf("%d",&m);
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=i;j++) {
		printf("*");
		}
	printf("\n");
	}
	return 0;
}
	
