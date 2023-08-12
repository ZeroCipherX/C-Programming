#include <stdio.h>
int main() {
    int arr[7];
    int temp,i;
  for (i = 0; i < 7; i++) {
     printf("Enter array value no %d : ",i+1);
     scanf("%d", &arr[i]);}
    for (i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
    if (arr[i] > arr[j]) {
       temp = arr[i];
       arr[i] = arr[j];
      arr[j] = temp;}}}
 printf("Array elements in ascending order: ");
    for (int i = 0; i < 7; i++) {
  printf("%d ", arr[i]);}
 printf("\n");
 for (i = 0; i < 7; i++) {
   for (int j = i + 1; j < 7; j++) {
     if (arr[i] < arr[j]) {
    temp = arr[i];
          arr[i] = arr[j];
       arr[j] = temp;}}}
    printf("Array elements in descending order: ");
for (int i = 0; i < 7; i++) {
printf("%d ", arr[i]); }
  printf("\n");
    return 0;
}