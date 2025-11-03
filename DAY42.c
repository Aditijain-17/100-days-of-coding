\\Q83. Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;
   printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
  while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
  i++;
    }
  printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
  return 0;
}

\\Q84. Convert a lowercase string to uppercase without using built-in functions.

  #include <stdio.h>
int main() {
    char str[100];
    int i = 0;
   printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
  return 0;
}

