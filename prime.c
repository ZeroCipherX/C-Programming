#include <stdio.h>
int main(){ 
int n,a,i;
	printf("enter your number : ");
	scanf("%d",&n);
	a=0;
	for(int i=2;i<=n-1;i++) {
	if(n%i==0) {
	a=1;
	break;
	}
		}
	if(n==1) { printf("the number is nor composite or prime");}
	else if(a==0) { printf("the number is prime");}
	else printf("the number is composite");
	}