#include <stdio.h>

int main() {
    int i, workingHours;
    int employees = 10;
    float overtime, overtimePay;

    for (i = 1; i <= employees; i++) {
        printf("Employee %d\n", i);
        printf("Enter working hours: ");
        scanf("%d", &workingHours);

        if (workingHours > 40) {
            overtime = workingHours - 40;
            overtimePay = overtime * 12;
            printf("Overtime: %.0f hours\n", overtime);
            printf("Overtime pay: Rs %.2f\n\n", overtimePay);
        } else {
            printf("No overtime\n");
            printf("Overtime pay: Rs 0\n\n");
        }
    }

    return 0;
}
