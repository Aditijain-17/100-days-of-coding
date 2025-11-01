\\Q39. Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }
  return 0;
}

\\Q40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>
int main() {
    char binary[100], onesComplement[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid binary digit '%c' detected.\n", binary[i]);
            return 1;
        }
    }
    onesComplement[i] = '\0'; 
    printf("1's Complement: %s\n", onesComplement);

    return 0;
}


  
