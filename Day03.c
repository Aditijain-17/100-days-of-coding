\\Q5. Write a program to convert temperature from Celsius to Fahrenheit.

  #include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
 return 0;
}

\\Q6. Write a program to swap two numbers using a third variable

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter first number (a): ");
    scanf("%d", &a);
 printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
 return 0;
}
