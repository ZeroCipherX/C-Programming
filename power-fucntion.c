#include <stdio.h>
#include <math.h>

int power(int, int);

int main() {
    int a, b, result;
    printf("Enter your base number: ");
    scanf("%d", &a);
    printf("Enter your exponent number: ");
    scanf("%d", &b);
    result = power(a, b);
    printf("%d raised to the power of %d is %d\n", a, b, result);
	}
int power(int a, int b) {
    int result = pow(a, b);
   
}
