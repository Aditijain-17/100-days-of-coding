\\Q115. Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_COUNT 26  

bool areAnagrams(char *s, char *t) {
    int count[CHAR_COUNT] = {0};
    if (strlen(s) != strlen(t))
        return false;
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char s[1000], t[1000];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
