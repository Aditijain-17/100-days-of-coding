\\Q41. Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swappedNum;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
last = num % 10; 
 digits = (int)log10(num); 
    first = num / (int)pow(10, digits);
    int middle = num % (int)pow(10, digits); 
    middle = middle / 10;  
    swappedNum = last * (int)pow(10, digits) + middle * 10 + first;
    printf("Swapped number: %d\n", swappedNum);

    return 0;
}

\\Q42. Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 0;
    }
    for (int i = 1; i < num; i++) {
     if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
