\\Q35. Write a program to print all factors of a given number.

  #include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 0;
    }
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

\\Q36. Write a program to find the HCF (GCD) of two numbers.

  #include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF (GCD) is: %d\n", a);

    return 0;
}

