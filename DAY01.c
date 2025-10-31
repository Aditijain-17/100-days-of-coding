\\ Q1: Write a program to input two numbers and display their sum.

  #include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);
return 0;
}


\\Write a program to input two numbers and display their sum, difference, product, and quotient.

 #include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
  printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);
    if (num2 != 0) {
        printf("Quotient = %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero!\n");
    }
 return 0;
}
