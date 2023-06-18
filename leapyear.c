#include <stdio.h>
int main(){
int Year;
printf("enter any year");
scanf("%d",&Year);
if(Year%4==0){
printf("this is a leap year");
}
else{
printf("this is not a leap year");
}
return 0;
}