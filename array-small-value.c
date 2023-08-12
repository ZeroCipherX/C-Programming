#include<stdio.h>
int main () {
int arr[5];
int i,small;
for(i=0;i<5;i++) {
 	printf("enter your element %d : ",i+1);
 	scanf("%d",&arr[i]);
 	}
 small=arr[0];
 for(i=0;i<5;i++) {
 if(arr[i]<=small) {
 small = arr[i]; 
 }
 } 
 	printf("your smallest value is %d",small);
 	return 0;
 	}