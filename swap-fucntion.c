#include <stdio.h>
void swap(int*a, int*b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main() {
    int a, b;
    printf("Enter your first number a: ");
    scanf("%d", &a);
    printf("Enter your second number b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After swapping, a is %d and b is %d\n", a, b);
    return 0;
}
