#include <stdio.h>
int fact(int num);
int main(){
    int a;
    int factorial;
    printf("***Enter a Number\n***");
    scanf("%d", &a);
    factorial = fact(a);
    printf("Factorial of %d is %d\n", a, factorial);
    return 0;
}
int fact(int num) {
    int func= 1;
    for(int i=1; i<=num; i++){
        func=func*i;
    }
    return(func);
}