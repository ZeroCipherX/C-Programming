#include <stdio.h>
int factorial(int a){
if(a==1){
return 1;}
else  {
return a*factorial(a-1);
}}
int main() {
int num;
printf("enter a number : ");
scanf("%d",&num);
printf("factorial of %d is %d",num,factorial(num));
}