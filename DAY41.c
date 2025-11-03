\\Q81. Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
  printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[count] != '\0') {
        count++;
    }
    if (str[count - 1] == '\n') {
        count--;
    }
   printf("Number of characters in the string: %d\n", count);
  return 0;
}

\\Q82. Print each character of a string on a new line.

  #include <stdio.h>
int main() {
    char str[100];
    int i = 0;
   printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
   printf("Characters in the string:\n");
    while (str[i] != '\0') {
        if (str[i] != '\n') {  
            printf("%c\n", str[i]);
        }
        i++;
    }
   return 0;
}

