#include <conio.h>

int main()
{
    // Declare local variables
    char operator;
    int num1, num2;
    float result;

    // Get input from user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter first operand: ");
    scanf("%d", &num1);

    printf("Enter second operand: ");
    scanf("%d", &num2);

    // Perform the required operation based on the entered operator
    if (operator == '+')
    {
        result = num1 + num2;
    }
    else if (operator == '-')
    {
        result = num1 - num2;
    }
    else if (operator == '*')
    {
        result = num1 * num2;
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            result = (float)num1 / (float)num2;
        }
        else
        {
            printf("Error: Division by zero is undefined.\n");
            return 1;
        }
    }
    else
    {
        printf("Error: Invalid operator entered.\n");
        return 2;
    }

    // Print the result
    printf("The result is: %.2f\n", result);
    return 0;
}
