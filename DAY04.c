\\Q7. Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}

\\Q8. Write a program to find and display the sum of the first n natural numbers.

 #include <stdio.h>

int main() {
    int n, sum;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

