\\Q25. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

  #include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  
printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
             printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

\\Q26. Write a program to print numbers from 1 to n.

  #include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number greater than 0.\n");
    } else {
        printf("Numbers from 1 to %d:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
