#include<stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 1, b = 1, sum;
    for (int i = 1; i <= n; i++) {
        printf("The %dth Fibonacci number is %d\n", i, a);
        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}
