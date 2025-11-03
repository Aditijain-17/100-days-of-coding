\\Q93. Check if two strings are anagrams of each other.

  #include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count[26] = {0};  
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count[str1[i] - 'a']++;
        }
        i++;
    }
   i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count[str2[i] - 'a']--;
        }
        i++;
    }
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }
   return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') str1[i] = '\0';
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') str2[i] = '\0';
    }
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}

\\Q94. Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main() {
    char str[200], longest[50];
    int i = 0, maxLen = 0, currLen = 0, start = 0;
   printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &str[start], currLen);
                longest[currLen] = '\0'; 
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }
    if (currLen > maxLen) {
        maxLen = currLen;
        strncpy(longest, &str[start], currLen);
        longest[currLen] = '\0';
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
   return 0;
}

