\\Q27. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); 
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
 return 0;
}

\\Q28. Write a program to print the product of even numbers from 1 to n.

  #include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; 
    int hasEven = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        for (i = 2; i <= n; i += 2) {
            product *= i;
            hasEven = 1;
        }
 if (hasEven) {
            printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
        }
    }
 return 0;
}
 
