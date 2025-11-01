\\Q43. Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, digit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
 originalNum = num;
    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
 return 0;
}

\\Q44. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

  #include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
 return 0;
}

