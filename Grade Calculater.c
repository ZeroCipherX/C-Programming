#include <stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5;
int Total Marks;
float Percentage;
for (int i=1;i<=5;i++){
printf("enter marks of &d students\n");
scanf("%d\n,%d\n,%d\n,%d\n,%d\n",&sub1,&sub2,&sub3,&sub4,&sub5);
Total Marks = sub1+sub2+sub3+sub4+sub5;
Percentage = (Total Marks/550)*100;
printf("Percentage = %f\n", Percentage);
printf("Total Marks = %d\n", Total Marks);
if(Total Marks >=450 || Total Marks <=500){
printf("A+ grade\n");}
else if(Total Marks >=400 || Total Marks <=450){
printf("A grade\n");}
else if(Total Marks >=350 || Total Marks <=400){
printf("B grade\n");}
else if(Total Marks >=300 || Total Marks <=350){
printf("C grade\n");}
else if(Total Marks >=250 || Total Marks <=300){
printf("FAIL HAHAHA");}
} return 0;
}
