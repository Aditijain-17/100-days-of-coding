\\Q31. Write a program to take a number as input and print its equivalent binary representation.

  #include <stdio.h>

int main() {
    int num, binary[32], i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

\\Q32. Write a program to check if a number is a palindrome.

  #include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
  originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
 return 0;
}

