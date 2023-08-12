#include <stdio.h>
int main() {
    int n,arr[100], i, search, a;
    printf("Enter array size : ");
    scanf("%d",&n);
    
    printf("\n\tEnter Array elements : \n");
    for (int i = 0; i < n; i++) {
        printf("\tEnter array element %d: \n", i + 1);
        scanf("%d", &arr[i]);
          }
    printf("\n\tArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    a = 0;
    printf("\n\tEnter the number you want to search: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (search == arr[i]) {
            printf("\n\tYour number is present at location %d\n", i + 1);
            a = 1;
            break;
        }
    }
    if (a == 0) {
        printf("Your number is not present in the array.\n");
    }
    return 0;
}
