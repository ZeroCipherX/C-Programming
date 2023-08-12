#include <stdio.h>
int fabo(int num) {
    if (num <= 1) {
        return num;
    } else {
        return (fabo(num - 1) + fabo(num - 2)); }}

int main() {
    int n, k;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("The Fibonacci series:\n");
    for (k = 0; k < n; k++) {
        printf("%d\n ", fabo(k));
    }
    printf("\n");
    return 0;
}