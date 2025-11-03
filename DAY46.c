\\Q91. Remove all vowels from a string.

  #include <stdio.h>
int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
   while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j++] = str[i];
        }
 i++;
    }

    result[j] = '\0';  
  printf("String without vowels: %s\n", result);
  return 0;
}

\\Q92. Find the first repeating lowercase alphabet in a string.

  #include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};  
    int i = 0;
 printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        char ch = str[i];
    if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
   i++;
    }
   printf("No repeating lowercase alphabet found.\n");
    return 0;
}

