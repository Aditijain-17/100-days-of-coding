\\Q37. Write a program to find the LCM of two numbers.

  #include <stdio.h>
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = findHCF(num1, num2);
    lcm = (num1 * num2) / hcf;
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
 return 0;
}

\\Q38.Write a program to find the sum of digits of a number.

  #include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);

    return 0;
}

