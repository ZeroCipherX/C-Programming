#include<stdio.h>
int main() {
int a,b;
char ch;
 printf("Enter two numbers and an operator ");
    scanf("%d %d %c", &a, &b, &ch);
switch(ch) {
case '+':
printf("%d",a+b);
break;
case '-':
printf("%d",a-b);
break;
case '/':
printf("%d",a/b);
break; }
return 0;
}