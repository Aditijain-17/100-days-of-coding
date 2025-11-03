\\Q114. Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

  #include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256;

int longestUniqueSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;

    int lastIndex[CHAR_RANGE];
    for (int i = 0; i < CHAR_RANGE; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];

        // If character was seen before, move start to avoid repetition
        if (lastIndex[(int)currentChar] >= start)
            start = lastIndex[(int)currentChar] + 1;

        lastIndex[(int)currentChar] = end;

        int windowLength = end - start + 1;
        if (windowLength > maxLength)
            maxLength = windowLength;
    }

    return maxLength;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestUniqueSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}
