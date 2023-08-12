#include <stdio.h>
int cube(int);
int main() {
    int number,result;
    printf("Enter a number you want the cube of : ");
    scanf("%d", &number);
    result = cube(number);
    	 printf("The cube of %d is: %d\n", number, result);
    }
  	 int cube(int number) {
   	 int cub=1;
   	 for (int i = 1; i <= 3; i++) {
         cub = cub*number;
    }

}