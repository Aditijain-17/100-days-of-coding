\\Q120. Write a program to take a string input. Change it to sentence case.

  #include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    int capitalize = 1; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalize = 1;
        }
    }

    printf("Sentence case:\n%s", str);

    return 0;
}
