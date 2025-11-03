\\Q85. Reverse a string.

  #include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';
            break;
        }
        length++;
    }
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
   printf("Reversed string: %s\n", str);
  return 0;
}

\\Q86. Check if a string is a palindrome.

#include <stdio.h>
int main() {
    char str[100];
    int start = 0, end = 0, isPalindrome = 1;
  printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[end] != '\0') {
        if (str[end] == '\n') {
            str[end] = '\0';
            break;
        }
        end++;
    }
end--;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
   if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
   return 0;
}

